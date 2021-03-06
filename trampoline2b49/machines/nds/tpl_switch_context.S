/**
 * @file tpl_irq.S
 *
 * @section descr File description
 *
 * IRQ handling.
 *
 * @section copyright Copyright
 *
 * Trampoline OS
 *
 * Trampoline is copyright (c) IRCCyN 2005+
 * Copyright ESEO for function and data structures documentation and ARM port
 * Trampoline is protected by the French intellectual property law.
 *
 * This software is distributed under the Lesser GNU Public Licence
 *
 * @section infos File informations
 *
 * $Date$
 * $Rev$
 * $Author$
 * $URL$
 */

#include "tpl_asm_definitions.h"

#define OS_START_SEC_CODE
#include "tpl_as_memmap.h"

	.text
	.arm
	.align 4
	.global tpl_switch_context
	.global tpl_switch_context_from_it
	.type tpl_switch_context STT_FUNC
	.type tpl_switch_context_from_it STT_FUNC
	
tpl_switch_context:
	/* if old_context is null, skip a save sequence */
	cmp r0, #0
	beq _restore_switch_context
	
	/* start saving */
	/* r0 = old_context->context */
	ldr r0, [r0]
	/* save registers into old context's stack */
	stmdb sp!, {r2}
	/* r2 = old_context->r3 addr */
	add r2, r0, #(4 * 3)
	/* save old context's r3-r12 registers */
	stmia r2!, {r3-r12}
	/* load saved r2 registers */
	ldmia sp!, {r2}
	/* save old context's r0-r2 registers */
	stmia r0, {r0-r2}
	/* r0 = old_context->sp addr */	
	add r2, r0, #(4 * 13)
	stmia r2!, {sp, lr}
	/* r3 = set old context's pc for exit this function */
	adr r3, _exit_switch_context + 4
	mrs r4, cpsr
	/* save old contect's pc & cpsr */
	stmia r2!, {r3, r4}

_restore_switch_context:	
	/* start restoring */
	/* r1 = running_context->context */
	ldr r1, [r1]
	/* r0 = running_context->r4 addr */
	add r0, r1, #(4 * 4)
	ldmia r0!, {r4-r12, sp, lr}
	/* lr = running_context's pc      *
	 * r4 = running_context->psr addr */
	ldmia r0!, {r3}
	sub r3, r3, #4
	/* push pc value into stack */
	stmdb sp!, {r3}
	/* save registers to protect the values */
	stmdb sp!, {r4}
	/* r5 = running_context->psr */
	ldr r4, [r0]
	/* recovered cpsr */
	msr cpsr, r4
	/* recover running_context's r0-r3 */
	ldmia r1, {r0-r3}
	/* recover saved running_context's r4-r5 from sp */
	ldmia sp!, {r4, pc}
	
_exit_switch_context:
	bx lr

tpl_switch_context_from_it:
	bx lr
	
#define OS_STOP_SEC_CODE
#include "tpl_as_memmap.h"

#define OS_START_LTORG
#include "tpl_as_memmap.h"
#define OS_STOP_LTORG
#include "tpl_as_memmap.h"

/* End of file tpl_irq.S */
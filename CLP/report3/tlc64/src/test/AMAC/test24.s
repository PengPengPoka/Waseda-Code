	.text
	.p2align 2
	.global	sum
sum:
	stp	x29, x30, [sp, -32]!
	add	x29, sp, 32
	str	w0, [x29, -8]
	str	w1, [x29, -12]
	ldr	w8, [x29, -8]
	ldr	w9, [x29, -12]
	sub	w8, w8, w9
	str	w8, [x29, -4]
	sub	sp, sp, #16
	str	w9, [sp, 4]
	str	w10, [sp, 0]
	ldr	w8, [x29, -4]
	mov	w0, w8
	bl	put_int
	ldr	w9, [sp, 4]
	ldr	w10, [sp, 0]
	add	sp, sp, 16
	ldr	w8, [x29, -4]
	mov	w0, w8
	b	_END_sum
_END_sum:
	ldp	x29, x30, [sp], 32
	ret

	.global	_main
_main:
	stp	x29, x30, [sp, -32]!
	add	x29, sp, 32
	sub	sp, sp, #16
	str	w8, [sp, 8]
	str	w10, [sp, 0]
	mov	w8, 1
	mov	w0, w8
	mov	w8, 2
	mov	w1, w8
	bl	sum
	mov	w9, w0
	ldr	w8, [sp, 8]
	ldr	w10, [sp, 0]
	add	sp, sp, 16
	str	w9, [x29, -4]
	sub	sp, sp, #16
	str	w9, [sp, 4]
	str	w10, [sp, 0]
	ldr	w8, [x29, -4]
	mov	w0, w8
	bl	put_int
	ldr	w9, [sp, 4]
	ldr	w10, [sp, 0]
	add	sp, sp, 16
_END_main:
	ldp	x29, x30, [sp], 32
	ret

	.text
	.p2align 2
.LC0:
	.string "%d\n"
	.text
	.p2align 2
put_int:
	sub	sp, sp, #32
	stp	x29, x30, [sp, #16]
	add	x29, sp, #16
	stur	w0, [x29, #-4]
	ldur	w9, [x29, #-4]
	mov	x8, x9
	adrp	x0, .LC0@PAGE
	add	x0, x0, .LC0@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldp	x29, x30, [sp, #16]
	add	sp, sp, #32
	ret

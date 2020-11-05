	.file	"name_addr.c"
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"\320\241\320\265\321\200\320\263\320\265\320\271 \320\234\320\265\320\264\320\262\320\265\320\264\320\272\320\270\320\275"
	.align 8
.LC1:
	.string	"\320\232\321\200\320\260\321\201\320\275\320\276\320\264\320\260\321\200\321\201\320\272\320\270\320\271 \320\272\321\200\320\260\320\271"
.LC2:
	.string	"\320\224\320\270\320\275\321\201\320\272\320\276\320\271 \321\200\320\260\320\271\320\276\320\275"
	.align 8
.LC3:
	.string	"\320\241\320\274\320\276\320\273\320\265\320\275\321\201\320\272\320\270\320\271 \320\277\320\265\321\200\320\265\321\203\320\273\320\276\320\272"
	.align 8
.LC4:
	.string	"\320\224\320\276\320\274 12 \320\272\320\276\321\200\320\277\321\203\321\201 1 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\320\260 8"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	leaq	.LC1(%rip), %rdi
	call	puts@PLT
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	.LC4(%rip), %rdi
	call	puts@PLT
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-10ubuntu2) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

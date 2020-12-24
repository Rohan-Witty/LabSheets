	.file	"lab3_1.c"
	.text
	.section	.rodata
.LC0:
	.string	"Enter value of a: "
.LC1:
	.string	"%f"
.LC2:
	.string	"Enter value of b: "
.LC3:
	.string	"Enter value of x and y"
.LC4:
	.string	"%d%d"
.LC5:
	.string	"Product of %f and %f is: %f\n"
.LC6:
	.string	"Product of %d and %d is: %d\n"
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
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	leaq	.LC2(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-16(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movss	-20(%rbp), %xmm1
	movss	-16(%rbp), %xmm0
	mulss	%xmm1, %xmm0
	movss	%xmm0, -12(%rbp)
	leaq	.LC3(%rip), %rdi
	call	puts@PLT
	leaq	-24(%rbp), %rdx
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC4(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	cvtss2sd	-12(%rbp), %xmm2
	movss	-16(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm1
	movss	-20(%rbp), %xmm0
	cvtss2sd	%xmm0, %xmm0
	leaq	.LC5(%rip), %rdi
	movl	$3, %eax
	call	printf@PLT
	movl	-28(%rbp), %edx
	movl	-24(%rbp), %eax
	movl	%edx, %ecx
	imull	%eax, %ecx
	movl	-24(%rbp), %edx
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC6(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rsi
	xorq	%fs:40, %rsi
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0"
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

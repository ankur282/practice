	.file	"exp.c"
	.text
	.section	.rodata
.LC0:
	.string	"Hello world"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	movl	$5, %edi
	call	my_function
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
.LC1:
	.string	"17:24:30"
.LC2:
	.string	"Sep 18 2023"
	.align 8
.LC3:
	.string	"This value:%d from %s and line no.:%d \nDate:\"%s\" and Time:\"%s\" from file:\"%s\" \n"
.LC4:
	.string	"exp.c"
	.text
	.globl	my_function
	.type	my_function, @function
my_function:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %eax
	subq	$8, %rsp
	leaq	.LC4(%rip), %rdx
	pushq	%rdx
	leaq	.LC1(%rip), %r9
	leaq	.LC2(%rip), %r8
	movl	$24, %ecx
	leaq	__func__.2385(%rip), %rdx
	movl	%eax, %esi
	leaq	.LC3(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addq	$16, %rsp
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	my_function, .-my_function
	.section	.rodata
	.align 8
	.type	__func__.2385, @object
	.size	__func__.2385, 12
__func__.2385:
	.string	"my_function"
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~18.04) 9.4.0"
	.section	.note.GNU-stack,"",@progbits

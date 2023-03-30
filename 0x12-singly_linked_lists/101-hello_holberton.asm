section .data
	hello_msg db "Hello, Holberton",0Ah

section .text
	global main

	extern printf

main:
	mov rdi, hello_msg
	xor eax, eax
	call printf

	xor edi, edi
	mov eax, 60
	syscall

section .text
	global - start
-start:
	mov edx, len
	mov ecx, msg
	mov ebx, 1
	mov eax, 4
	int 0x080

section .data
	msg db "Hello, Holberton",10
	len equ $ -msg

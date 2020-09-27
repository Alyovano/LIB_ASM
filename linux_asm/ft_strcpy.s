			section .text
            global  ft_strcpy

ft_strcpy:	
            mov	rax, 0
			mov	rcx, 0

boucle:		
            mov	dl, byte[rsi + rcx]
			mov	byte[rdi + rcx], dl
			cmp	byte dl, 0
			je	fin
			inc	rcx
			jmp	boucle

fin:		
            mov	rax, rdi
			ret
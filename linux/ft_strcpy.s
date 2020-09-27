			section .text
            global  ft_strcpy


ft_strcpy:	mov			rax, 0
			mov			rcx, 0

boucle:		mov			dl, BYTE [rsi + rcx]
			mov			BYTE [rdi + rcx], dl
			cmp			BYTE dl, 0
			je			fin
			inc			rcx
			jmp			boucle

fin:		mov			rax, rdi
			ret
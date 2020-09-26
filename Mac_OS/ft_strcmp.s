                section     .text
                global      _ft_strcmp

_ft_strcmp:	
            mov	rax, 0
			mov	rcx, 0
            jmp verif

verif:
            cmp rdi, byte 0x0
            je fin_str
            cmp rsi, byte 0x0
            je fin_str

boucle:		
            mov	al, [rdi]
			mov	cl, [rsi]
			cmp	al, cl
			jne	return_diff
			cmp	al, 0
			je	fin_str
			cmp	cl, 0
			je	fin_str
			inc	rdi
			inc	rsi
			jmp	boucle

return_diff:		
            sub	rax, rcx
			ret

fin_str:	ret
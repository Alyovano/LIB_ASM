    	global      ft_strcmp
ft_strcmp:
    xor     rcx, rcx
boucle:
    mov     dl, BYTE[rdi + rcx]
    cmp     dl, BYTE[rsi + rcx]
    je      increment_or_end
    jl      petit
    jg      grand

increment_or_end:
    cmp     dl, 0
    je      end
    inc     rcx
    jmp     boucle

petit:
    mov     rax, -1
    ret

grand:
    mov     rax, 1
    ret

end:
    xor     rax, rax
    ret
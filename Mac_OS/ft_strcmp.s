                section     .text
                global      _ft_strcmp


_ft_strcmp:
            mov rax, 0
            jmp verif
            jmp boucle
boucle:
            cmp byte[rdi], 0
            je str_zero
            cmp byte[rsi], 0
            je str_zero
            mov cl, byte[rdi]
            mov dl, byte[rsi]
            cmp cl, dl
            jne end
            inc rdi
            inc rsi
verif:
            cmp rdi, byte 0x0
            je end
            cmp rsi, byte 0x0
            je end
str_zero:
            ret 0
end:
            movzx rax, dl
            movzx rbx, cl
            sub rax, rbx
            ret

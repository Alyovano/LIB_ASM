           section .text
            global  ft_strlen

ft_strlen:
            mov rax, 0
                                            ; Initialisation de mon registre a 0
            jmp verif
                                            ; Verification de l'existance de ma str
            jmp boucle
                                            ; On rentre dans la boucle
verif:
            cmp rdi, byte 0x0
                                            ; Verification que le premier octet existe
            je  fin
                                            ; Si il vaut 0 alors le programme prend fin
boucle:
            cmp byte[rdi + rax], 0
                                            ; while (str[i] != "\0")
            je fin
                                            ; Condition remplie alors on s'arrete
            inc rax
                                            ; i++
            jmp boucle
                                            ; Retour a ma boucle while
fin:
            RET
                                            ; return (i)
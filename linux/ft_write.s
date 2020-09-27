            section .text
            global  ft_write

ft_write:
            mov rax, 1 ;Changement du num syscall sous linux
            syscall
            ret
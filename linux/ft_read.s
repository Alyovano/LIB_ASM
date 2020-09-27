            section .text
            global  ft_read

ft_read:
            mov rax, 0 ;Changement du num syscall sous linux
            syscall
            ret

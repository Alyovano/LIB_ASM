            section .text
            global  ft_read
            extern  __errno_location

ft_read:
            mov rax, 0
            syscall
            jc error ; JC = Carry flag = Il gere le signe du nombre
            ret

error:
            push rax
            call __errno_location
            pop rcx
            mov [rax], rcx
            mov rax, -1
            ret

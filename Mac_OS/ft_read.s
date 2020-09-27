            section .text
            global  _ft_read
            extern ___error

_ft_read:
            mov rax, 0x2000003
            syscall
            jc error ; JC = Carry flag = Il gere le signe du nombre
            ret

error:
            push rax
            call ___error
            pop rcx
            mov [rax], rcx
            mov rax, -1
            ret

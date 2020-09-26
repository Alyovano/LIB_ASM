# LIB_ASM
gcc -c main.c && nasm -f macho64 test.s && gcc main.o test.o && ./a.out
nasm -f macho64 test.s
Les 6 premiers paramètres sont passés comme ça : rdi (1er paramètre), rsi (2), rdx (3), rcx (4), r8 (5), r9(6).

; 1st arg           Stack           EBX               RDI            RDI
; 2nd arg           Stack           ECX               RSI            RSI
; 3rd arg           Stack           EDX               RDX            RDX
; 4th arg           Stack           ESI               RCX            R10
; 5th arg           Stack           EDI               R8             R8
; 6th arg           Stack           EBP               R9

Documentation -> 
>Jump = http://faydoc.tripod.com/cpu/je.htm

https://askcodez.com/images2/155807970253616.png

# LIB_ASM
gcc -c main.c && nasm -f macho64 test.s && gcc main.o test.o && ./a.out
nasm -f macho64 test.s
Les 6 premiers paramètres sont passés comme ça : rdi (1er paramètre), rsi (2), rdx (3), rcx (4), r8 (5), r9(6).

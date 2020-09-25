gcc -c main.c && nasm -f macho64 ft_read.s && nasm -f macho64 ft_strlen.s && nasm -f macho64 ft_write.s && gcc main.o ft_write.o ft_read.o ft_strlen.o && ./a.out

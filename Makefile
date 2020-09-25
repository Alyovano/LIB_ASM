all:
	nasm -f macho64 *.s
	gcc -c -Wall -Werror -Wextra main.c
	gcc *.o

clean:
	rm *.o
	rm a.out

.PHONY: clean

SRCS		=	ft_strlen.s\
				ft_write.s\
				ft_read.s\
				ft_strcmp.s\
				ft_strcpy.s\
				ft_strdup.s\

OBJS		=	$(SRCS:.s=.o)

ASM			=	nasm -f elf64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a

%.o:			%.s
				$(ASM) $<

all:			$(NAME)
				gcc -no-pie main.c -L. -lasm

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME)
				@rm -rf a.out
				@rm -rf main.o
				@rm -rf TEST_WRITE.txt

re:				fclean $(NAME)

.PHONY:			clean fclean re

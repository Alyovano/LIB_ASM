SRCS		=	ft_strlen.s\
				ft_write.s\
				ft_read.s\
				ft_strcmp.s\

OBJS		=	$(SRCS:.s=.o)

ASM			=	nasm -f macho64
FLAGS 		=	-Wall -Werror -Wextra
NAME		=	libasm.a

%.o:			%.s
				$(ASM) $<

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -rf $(OBJS)

fclean:			clean
				rm -rf $(NAME)
				rm -rf a.out

re:				fclean $(NAME)

.PHONY:			clean fclean re

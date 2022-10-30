SRCS	= ft_printf.c ft_types.c ft_putstr.c \
			ft_puthexa.c ft_putnbr.c ft_putptr.c

OBJS	= ${SRCS:.c=.o}

NAME	= libfprintf.a

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

RM		= rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}

all :	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all clean fclean re
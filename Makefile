SRCS	= ft_printf.c ft_types.c ft_utils.c

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
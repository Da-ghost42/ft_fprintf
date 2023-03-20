SRCS = ft_printf.c ft_putnbr.c ft_putstr.c ft_putchar.c ft_putnbr_base.c\
ft_strlen.c ft_nbrlen.c ft_putadd.c
FLAGS = -Wall -Werror -Wextra 

CC = cc

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

RM = rm -f

all : ${NAME}

${NAME} : ${OBJS}
	ar -rc $@ ${OBJS}

%.o : %.c ft_printf.h
	${CC}  ${FLAGS} -c $< -o $@

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY : all clean fclean re
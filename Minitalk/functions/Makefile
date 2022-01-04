# _*_ MakeFile _*_

NAME = functions.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_error.c ft_atoi.c ft_bzero.c ft_strlen.c ft_putnbr.c ft_lstnew.c ft_lstclear.c ft_dataprinter.c 

OBJS = $(SRCS:.c=.o)

ICLS = ../minitalk.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o: 
	$(CC) $(CFLAGS) -I $(ICLS) -c $<

clean : 
	rm -f $(OBJS)
	
fclean :	clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean re all
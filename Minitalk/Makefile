# _*_ MakeFile _*_

NAME = Minitalk
CC = cc

CFLAGS = -Wall -Wextra -Werror
FUNC = functions/functions.a
ICLS = minitalk.h

all: $(NAME)

$(NAME):
	cd functions && make && cd ..
	gcc $(FUNC) server.c -o server
	gcc $(FUNC) client.c -o client

clean : 
	cd functions && make clean && cd ..
	
fclean :	clean
	rm -f $(NAME) $(FUNC) 

re : fclean all

.PHONY: re all fclean clean bonus
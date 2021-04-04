##
## EPITECH PROJECT, 2020
## 104
## File description:
## makefile
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	104intersection

all:
	gcc -c $(SRC) -lm
	gcc -o $(NAME) $(SRC) -lm

clean:
	rm -f $(OBJ)
	rm -f $(NAME)
	rm -f *~

fclean:	clean

re:	fclean all


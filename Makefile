##
## EPITECH PROJECT, 2024
## Workshop_Unit_Tests
## File description:
## Makefile
##

NAME	=	my_str_to_word_array

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Wextra -Werror -I./includes

SRC_MAIN	=	src/src_main/main.c

SRC	=	$(shell find src/ -name '*.c' -not -name 'main.c')

OBJ	=	$(SRC:.c=.o)

OBJ_MAIN	=	$(SRC_MAIN:.c=.o)

TESTS_SRC =	$(shell find tests/ -name '*.c' -not -name 'main.c')

TESTS_OBJ =	$(TESTS_SRC:.c=.o)

TESTS_NAME =	unit-tests

all:	$(NAME)

$(NAME):	$(OBJ) $(OBJ_MAIN)
	$(CC) -o $(NAME) $(OBJ) $(OBJ_MAIN) $(CFLAGS)

clean:
	$(RM) $(OBJ) $(OBJ_MAIN)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

tests_run:	$(TESTS_OBJ)
	$(CC) -o $(TESTS_NAME) $(TESTS_OBJ) $(SRC) $(CFLAGS) -lcriterion --coverage
	./$(TESTS_NAME) && gcovr --exclude tests/ && gcovr --branches --exclude tests/

tests_clean:
	$(RM) $(TESTS_OBJ)
	$(RM) *.gcda *.gcno

tests_fclean: tests_clean fclean
	$(RM) $(TESTS_NAME)

tests_re: tests_fclean fclean tests_run

.PHONY:	all clean fclean re

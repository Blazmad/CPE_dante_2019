##
## EPITECH PROJECT, 2019
## PSU_minishell1_2019
## File description:
## Makefile
##

all:
	make -s -C solver/
	make -s -C generator/

clean:
	make clean -C solver/
	make clean -C generator/

fclean:	clean
	make fclean -C solver/
	make fclean -C generator/

re:	fclean all

.PHONY: all clean fclean re
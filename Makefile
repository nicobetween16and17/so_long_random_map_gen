all:
	cd ./Libft && make re && cd .. && gcc -Wall -Werror -Wextra main.c Libft/libft.a -o map_gen



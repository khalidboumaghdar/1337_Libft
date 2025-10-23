Name = libft.a
CC = cc
FLAG = -Werror -Wextra -Wall
SRC = ft_isalnum.c 
OBJ = ${SRC:.c=.o}

all:${Name} 

${Name}: ${OBJ} libft.h
		ar rcs ${Name} ${OBJ}

%.o: %.c libft.h
		${CC} ${FLAG}  -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${Name}

re: fclean all

.PHONY: all clean fclean re 
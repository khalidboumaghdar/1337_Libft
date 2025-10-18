Name = main
CC = cc
FLAG = -Werror -Wextra -Wall
SRC = ft_isalnum.c  
O = -o
Name_Com = hossain
build :  
	${CC} ${FLAG} ${src} ${O} ${Name_Com}

clean :
		echo "si hossain"


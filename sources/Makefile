CC			= 	gcc
NAME		= 	a.out
SRC			= 	src/my_printf.c				\
				main3.c
OBJ			=	$(SRC:%.c=%.o)
RM			= 	rm -f
INCS        =   -Iinclude -I../libs/Libmy/ASM/include
CFLAGS		= 	$(INCS)
LDFLAGS 	= 	-L../libs/Libmy/ASM/bin -lasmlib $(INCS)

$(NAME)		:	$(OBJ)
				make -C ../libs/Libmy/ASM
				$(CC) $(SRC) $(LDFLAGS) -o $(NAME)

all			:	$(NAME)

clean		:
				$(RM) $(OBJ)
				make -C ../libs/Libmy/ASM clean

fclean		:	clean
				$(RM) $(NAME)
				make -C ../libs/Libmy/ASM fclean

re			:	fclean all
				make -C ../libs/Libmy/ASM re

.PHONY		:	re clean fclean


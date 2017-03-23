CC			        = 	gcc
NAME		        = 	libmy_printf_`uname -m`-`uname -s`.a
NAMEDYN             =   libmy_printf_`uname -m`-`uname -s`.so
SRC			        = 	src/my_printf.c                             \
                        src/char_funcs.c                            \
                        src/nbr_funcs.c                             \
                        src/other_funcs.c
OBJ			        =	$(SRC:%.c=%.o)
RM			        = 	rm -f
INCS                =   -Iinclude -I../libs/Libmy/ASM/include
CFLAGS		        = 	$(INCS) -W -Wall -Werror -pedantic -fPIC
LDFLAGS 	        = 	-L../libs/Libmy/ASM/bin -lasmlib $(INCS)


$(NAME)		        :	my_printf_static my_printf_dynamic

all			        :	$(NAME)

my_printf_static    :   $(OBJ)
						make -C ../libs/Libmy/ASM
						ar r $(NAME) $(OBJ)
						ranlib $(NAME)

my_printf_dynamic   :   $(OBJ)
						make -C ../libs/Libmy/ASM
						cp ../libs/Libmy/ASM/bin/libasmlib.a .
						$(CC) $(LDFLAGS) -shared -o $(NAMEDYN) $(OBJ)

clean		        :
						$(RM) $(OBJ)
						$(RM) ./libasmlib.a
						make -C ../libs/Libmy/ASM clean

fclean		        :	clean
						$(RM) $(NAME)
						$(RM) $(NAMEDYN)
						make -C ../libs/Libmy/ASM fclean

re			        :	fclean all
						make -C ../libs/Libmy/ASM re

.PHONY		        :	re clean fclean


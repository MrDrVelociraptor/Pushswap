SRC = src/*.c


LIBFT = libft
INC = includes

LIBS = -L$(LIBFT) -lft
HEADERS = -I$(INC) -I$(LIBFT)
FLAGS = -Wall -Werror -Wextra $(LIBS) $(HEADERS)

all:
	@make -s -C $(LIBFT)
	@echo Compiling libft
	@gcc $(SRC) $(FLAGS) -o pushswap 
	@echo Good to go
	

clean:
	@rm -f pushswap
	@make fclean -s -C $(LIBFT)
	@echo nothing here anymore, well, except .c

fclean: clean

re: clean all

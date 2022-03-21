SRC = src/*.c


LIBFT = libft
INC = includes

LIBS = -L$(LIBFT) -lft
HEADERS = -I$(INC) -I$(LIBFT)
FLAGS = -Wall -Werror -Wextra $(LIBS) $(HEADERS)

all:
	@make -s -C $(LIBFT)
	@echo Compiling libft
	@gcc $(SRC) $(FLAGS) 
	@echo Good to go
	

clean:
	@make fclean -s -C $(LIBFT)
	@echo nothing here anymore, well, except .c

fclean: clean

re: clean all
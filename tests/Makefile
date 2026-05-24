NAME = libunit

CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIE

ROOT_DIR = ..
INC_DIR = $(ROOT_DIR)/inc
OBJ_DIR = obj

STRCPY_FILES =	strcpy/00_launcher.c	\
				strcpy/01_basic_test.c	\
				strcpy/02_wrong_result_test.c	\
				strcpy/03_null_src_test.c	\
				strcpy/04_bus_error_test.c

STRLEN_FILES =	strlen/00_launcher.c	\
				strlen/01_basic_test.c	\
				strlen/02_null_test.c	\
				strlen/03_bigger_str_test.c

DEPENDENCIES =	-L$(ROOT_DIR) -lunit \
				-L$(INC_DIR)/libft -lft \
				-L$(INC_DIR)/libft/libsimplelist -lsimplelist

AR = ar rcs

SRC	= 	main.c			\
 		$(STRCPY_FILES)	\
		$(STRLEN_FILES)

OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

test: $(NAME)
	@./$(NAME)

memcheck: $(NAME)
	@valgrind ./$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(DEPENDENCIES)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR) -I$(INC_DIR)/libft

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re

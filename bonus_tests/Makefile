NAME = libunit_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror

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

SIGNALS_FILES =	signals/00_launcher.c	\
				signals/01_abort.c	\
				signals/02_fpe.c	\
				signals/03_pipe.c	\
				signals/04_ill.c	\
				signals/05_timeout.c

DEPENDENCIES =	-L$(ROOT_DIR) -lunit_bonus \
				-L$(INC_DIR)/libft -lft \
				-L$(INC_DIR)/libft/libsimplelist -lsimplelist \
				-L$(INC_DIR)/libft/ft_printf -lftprintf

AR = ar rcs

SRC	= 	main_bonus.c			\
		$(STRCPY_FILES)			\
		$(STRLEN_FILES)			\
 		$(SIGNALS_FILES)

OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

test: $(NAME)
	@./$(NAME)

memcheck: $(NAME)
	@valgrind --leak-check=full --track-origins=yes ./$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(DEPENDENCIES)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR) -I$(INC_DIR)/libft

clean:
	@find . -name '*.o' -delete
	@rm -rf $(OBJ_DIR)
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re
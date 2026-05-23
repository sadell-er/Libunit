NAME = libunit

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = ../inc

STRCPY_FILES =	strcpy/00_launcher.c	\
				strcpy/01_basic_test.c	\
				strcpy/02_wrong_result_test.c	\
				strcpy/03_null_src_test.c	\
				strcpy/04_bus_error_test.c

STRLEN_FILES =	strlen/00_launcher.c	\
				strlen/01_basic_test.c	\
				strlen/02_null_test.c	\
				strlen/03_bigger_str_test.c

AR = ar rcs

SRC	= 	$(STRLEN_FILES) \
		$(STRCPY_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

OBJS = $(SRC:.c=.o)

all: $(NAME)

test: $(NAME)
	./$(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $< -o $@ -lunit -Llibunit 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR) -I$(INC_DIR)/libft

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) .bonus

re: fclean all

.PHONY: all test clean fclean re

NAME    = tests

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = tests/strcpy/00_launcher.c \
tests/strcpy/01_basic_test.c \
tests/strcpy/03_null_src_test.c \
tests/strcpy/02_wrong_result_test.c \
tests/strcpy/04_bus_error_test.c \
tests/strlen/00_launcher.c \
tests/strlen/01_basic_test.c \
tests/strlen/02_null_test.c \
tests/strlen/03_bigger_str_test.c \
tests/main.c

LIB = ../libunit.a

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIB)
    $(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME) -I ../inc/libft -Llibft -lft

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
    @ ./$(NAME)

$(LIB):
    $(MAKE) -C .. all

clean:
    rm -f $(OBJS)

fclean: clean
    rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re test
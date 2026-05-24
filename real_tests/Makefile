NAME    = real_tests

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    =   

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
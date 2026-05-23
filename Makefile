NAME = libunit.a
CC = cc
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRC = framework/launch_tests.c \
framework/loadtest.c \


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

BONUS_SRCS =

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

test: $(NAME) 
	make test -C tests

bonus: .bonus

.bonus: $(BONUS_OBJS) $(OBJS) 
	$(AR) $(NAME) $^ $^
	touch .bonus

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME) .bonus

re: fclean all

.PHONY: all clean fclean re bonus

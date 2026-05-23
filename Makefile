NAME = libunit.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = inc
SRC_DIR = framework
TEST_DIR = tests
REAL_TEST_DIR = real_tests

AR = ar rcs

SRC	= 	$(SRC_DIR)/launch_tests.c \
		$(SRC_DIR)/loadtest.c

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

.PHONY: all test clean fclean re bonus

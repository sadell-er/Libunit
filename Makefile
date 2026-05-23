NAME = libunit.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)

INC_DIR = inc
SRC_DIR = framework

AR = ar rcs

SRC = $(SRC_DIR)/launch_tests.c $(SRC_DIR)/loadtest.c

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

BONUS_SRCS =

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

test:

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

NAME = libunit.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = inc
SRC_DIR = framework
TEST_DIR = tests
REAL_TEST_DIR = real_tests
OBJ_DIR = obj
LIBFT_DIR = $(INC_DIR)/libft

AR = ar rcs
CFLAGS = -Wall -Wextra -Werror
SRC = framework/launch_tests.c \
framework/loadtest.c \

SRC	= 	$(SRC_DIR)/launch_tests.c \
		$(SRC_DIR)/loadtest.c

BONUS_SRCS =

OBJS = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

test: $(NAME)
	@make test -C $(TEST_DIR) --no-print-directory

memcheck: $(NAME)
	@make memcheck -C $(TEST_DIR) --no-print-directory

# bonus: .bonus

# .bonus: $(BONUS_OBJS) $(OBJS) 
# 	@$(AR) $(NAME) $^ $^
# 	@touch .bonus

$(NAME): $(OBJS)
	@$(AR) $@ $^

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(LIBFT_LIB):
	@make -C $(LIBFT_DIR) --no-print-directory

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f *.o

clean-test: clean
	@$(MAKE) clean -C $(TEST_DIR) --no-print-directory

fclean: clean
	@rm -f $(NAME) .bonus

fclean-test: fclean
	@make fclean -C $(TEST_DIR) --no-print-directory

re: fclean all

make re-test: fclean-test test

.PHONY: all test clean fclean re bonus

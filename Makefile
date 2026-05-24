NAME = libunit.a
BONUS = libunit_bonus.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

INC_DIR = inc
SRC_DIR = framework
TEST_DIR = tests
REAL_TEST_DIR = real_tests
REAL_TEST_BONUS_DIR = bonus_real_tests
OBJ_DIR = obj
LIBFT_DIR = $(INC_DIR)/libft
BONUS_DIR = bonus_framework
TEST_BONUS_DIR = bonus_tests

AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

SRC	= 	$(SRC_DIR)/launch_tests.c \
		$(SRC_DIR)/loadtest.c \
		$(SRC_DIR)/test_print.c

BONUS_SRCS =	$(BONUS_DIR)/launch_tests_bonus.c \
				$(BONUS_DIR)/loadtest_bonus.c \
				$(BONUS_DIR)/test_print_bonus.c

OBJS = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJS = $(BONUS_SRCS:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

test: $(NAME)
	@$(MAKE) test -C $(TEST_DIR) --no-print-directory
	@$(MAKE) test -C $(REAL_TEST_DIR) --no-print-directory

memcheck: $(NAME)
	@$(MAKE) memcheck -C $(TEST_DIR) --no-print-directory

bonus: $(BONUS)

$(BONUS): $(BONUS_OBJS)
	@$(AR) $@ $^

test-bonus: $(BONUS)
	@$(MAKE) test -C $(TEST_BONUS_DIR) --no-print-directory
	@$(MAKE) test -C $(REAL_TEST_BONUS_DIR) --no-print-directory

$(NAME): $(OBJS)
	@$(AR) $@ $^

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

$(LIBFT_LIB):
	@$(MAKE) -C $(LIBFT_DIR) --no-print-directory

clean:
	@rm -rf $(OBJ_DIR)
	@rm -f *.o
	@$(MAKE) clean -C $(TEST_DIR) --no-print-directory

fclean: clean
	@rm -f $(NAME) $(BONUS)
	@$(MAKE) fclean -C $(TEST_DIR) --no-print-directory
	@$(MAKE) fclean -C $(TEST_BONUS_DIR) --no-print-directory

re: fclean all

make re-test: fclean-test test

.PHONY: all test clean fclean re bonus

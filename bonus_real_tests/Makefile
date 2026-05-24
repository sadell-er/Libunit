NAME = real_tests_bonus

CC = cc
CFLAGS = -Wall -Wextra -Werror

ROOT_DIR = ..
INC_DIR = $(ROOT_DIR)/inc
OBJ_DIR = obj
LIBFT_DIR = $(INC_DIR)/libft

FT_ISALNUM_FILES = ft_isalnum/00_launcher.c \
                   ft_isalnum/01_basic_test.c \
                   ft_isalnum/02_wrong_test.c \
                   ft_isalnum/03_limit_test.c

FT_ISALPHA_FILES = ft_isalpha/00_launcher.c \
                   ft_isalpha/01_basic_test.c \
                   ft_isalpha/02_wrong_test.c \
                   ft_isalpha/03_limit_test.c

FT_ISASCII_FILES = ft_isascii/00_launcher.c \
                   ft_isascii/01_basic_test.c \
                   ft_isascii/02_wrong_test.c \
                   ft_isascii/03_limit_test.c

FT_ISDIGIT_FILES = ft_isdigit/00_launcher.c \
                   ft_isdigit/01_basic_test.c \
                   ft_isdigit/02_wrong_test.c \
                   ft_isdigit/03_limit_test.c

FT_ISPRINT_FILES = ft_isprint/00_launcher.c \
                   ft_isprint/01_basic_test.c \
                   ft_isprint/02_wrong_test.c \
                   ft_isprint/03_limit_test.c

FT_TOLOWER_FILES = ft_tolower/00_launcher.c \
                   ft_tolower/01_basic_test.c \
                   ft_tolower/02_wrong_test.c \
                   ft_tolower/03_limit_test.c

FT_TOUPPER_FILES = ft_toupper/00_launcher.c \
                   ft_toupper/01_basic_test.c \
                   ft_toupper/02_wrong_test.c \
                   ft_toupper/03_limit_test.c

SRC = main_bonus.c \
      $(FT_ISALNUM_FILES) \
      $(FT_ISALPHA_FILES) \
      $(FT_ISASCII_FILES) \
      $(FT_ISDIGIT_FILES) \
      $(FT_ISPRINT_FILES) \
      $(FT_TOLOWER_FILES) \
      $(FT_TOUPPER_FILES)

OBJS = $(SRC:%.c=$(OBJ_DIR)/%.o)

DEPENDENCIES = $(ROOT_DIR)/libunit_bonus.a \
               -L$(LIBFT_DIR) -lft \
               -L$(LIBFT_DIR)/libsimplelist -lsimplelist

all: $(NAME)

test: $(NAME)
	@./$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $^ -o $@ $(DEPENDENCIES)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -I$(INC_DIR) -I$(LIBFT_DIR) -c $< -o $@

clean:
	@find . -name '*.o' -delete
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all test clean fclean re

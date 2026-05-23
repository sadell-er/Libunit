# alias per dare il nome alla libreria
NAME = libsimplelist.a

# compilatore
CC = cc

# flags compilatore
CFLAGS = -Wall -Wextra -Werror

# FILE SORGENTE
SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c print_list.c \
		ft_lstiter.c ft_lstmap.c \

# File oggetto
OBJS_DIR = obj
OBJS         := $(patsubst %.c,$(OBJS_DIR)/%.o,$(SRCS))

FT_PRINTF = ft_printf/libftprintf.a

# regola di default -> dipende da $(NAME)
all: $(NAME)

# dichiara che libft.a dipende dai file oggetto  
$(NAME) : $(OBJS)
	@ar rc $@ $?
	@echo -e "\033[32m\n$(NAME) created!\033[0m"

$(OBJS_DIR):
	@mkdir -p $@

#compilazione dei file.c in file.o
$(OBJS_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo -e "\033[90m$< compiled\033[0m"

	
#rimozione dei file oggetto
clean:
	@$(MAKE) clean -C ft_printf
	@rm -rf $(OBJS_DIR)
	@rm -f *.o
	@echo -e "\033[33mObjects removed.\033[0m"

#rimozione di file oggetto e libreria
fclean: clean
	$(MAKE) fclean -C ft_printf
	@rm -f $(NAME)
	@echo -e "\033[31m$(NAME) wiped\033[0m"

#ricompilazione completa
re: fclean all

.PHONY: all clean fclean re

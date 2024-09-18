NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

# Source files
LIB_SRCS = $(wildcard srcs/*.c)

INCLUDES = -Iincludes 

# Object files
LIB_OBJS = $(LIB_SRCS:.c=.o)

# Archives
AR = ar rc 

# Colors
RED	= "\033[0;31m"
GREEN = "\033[0;32m"
NO_COLOR = "\033[0m"

# progress bar
define progress_bar
	@echo -n $(GREEN)"["
	@for i in $$(seq 1 $(words $(LIB_SRCS))); do \
		echo -n "■"; \
		sleep 0.01; \
	done
	@echo "]"
	@echo "Libft maked."$(NO_COLOR)
endef

# rules
all : $(NAME)

$(NAME) : $(LIB_OBJS)
	@$(AR) $(NAME) $(LIB_OBJS)
	@$(call progress_bar)

.c.o: 
	@cc $(CCFLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}

clean:
	@rm -rf ${LIB_OBJS}
	@echo $(RED) Removing libft.a and .o files$(NO_COLOR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
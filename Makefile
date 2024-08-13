NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

# Source files
LIB_SRCS = $(wildcard libft/srcs/*.c)

INCLUDES = -Ilibft/includes 

# Object files
LIB_OBJS = $(LIB_SRCS:.c=.o)

# Archives
AR = ar rc 

# Colors
RED	= "\033[0;31m"
GREEN = "\033[0;32m"
NO_COLOR = "\033[0m"

# rules
all : $(NAME)

$(NAME) : $(LIB_OBJS)
	@$(AR) $(NAME) $(LIB_OBJS)
	@echo $(GREEN) Making libft.a and .o files$(NO_COLOR)

.c.o: 
	@cc $(CCFLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}
	
clean:
	@rm -rf ${LIB_OBJS}
	@echo $(RED) Removing libft.a and .o files$(NO_COLOR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
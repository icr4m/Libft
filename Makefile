NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

# Source files
LIB_SRCS = $(wildcard libft/srcs/*.c)

INCLUDES = -Ilibft/includes 

# Object files
LIB_OBJS = $(LIB_SRCS:.c=.o)

# Archives
AR = ar rc 

# rules
all : $(NAME)

$(NAME) : $(LIB_OBJS)
	$(AR) $(NAME) $(LIB_OBJS)

.c.o: 
	cc $(CCFLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}
	
clean:
	rm -rf ${LIB_OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
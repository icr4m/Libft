NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

# Source files
LIB_SRCS = $(wildcard libft/srcs/*.c)
PRINTF_SRCS = $(wildcard ft_printf/ ft_printf_utils.c ft_printf.c ft_put_printf.c)
GNL_SRCS = $(addprefix gnl/ , get_next_line_bonus.c get_next_line_utils_bonus.c)

INCLUDES = -Ilibft/includes -Ignl -Ift_printf

# Object files
LIB_OBJS = $(LIB_SRCS:.c=.o)
PRINTF_OBJS = $(PRINTF_SRCS:.c=.o)
GNL_OBJS = $(GNL_SRCS:.c=.o)

# Archives
AR = ar rc 

# rules
all : $(NAME)

$(NAME) : $(LIB_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)
	$(AR) $(NAME) $(LIB_OBJS) $(PRINTF_OBJS) $(GNL_OBJS)

.c.o: 
	cc $(CCFLAGS) $(INCLUDES) -c $< -o ${<:.c=.o}
	
clean:
	rm -rf ${LIB_OBJS} ${PRINTF_OBJS} ${GNL_OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
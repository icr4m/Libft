NAME = libft.a

# Compilation
CC = cc

CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = 	ft_atoi.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c

# Object files
OBJS = $(SRCS:.c=.o)

# rules
all : $(NAME)

$(NAME) : $(OBJS)
	cc -o $@ $(OBJS)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)

re: fclean all
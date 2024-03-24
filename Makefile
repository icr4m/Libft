NAME = libft.a

# Compilation
CC = cc

CFLAGS = -Wall -Wextra -Werror

# Source files
SRCS = 	ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c

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
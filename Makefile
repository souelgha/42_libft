NAME = libft.a
SOURCES = \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_strlcpy.c\
	ft_strdup.c\
	ft_atoi.c\
	ft_putchar_fd.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_itoa.c\
	ft_strlcat.c\
	ft_split.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_strnstr.c\
	ft_substr.c\
	ft_strjoin.c\

OBJECTS = $(SOURCES:.c=.o)

HEAD = libft.h
AR = ar rc

CC = cc 
CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)


all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I ./ -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

TARGET = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
INC_PATH = .
SRC_PATH = src
OBJ_PATH = obj

SRC_FILES = ft_atoi.c ft_isalnum.c ft_isalpha.c\
ft_isascii.c ft_isdigit.c ft_isprint.c ft_strchr.c\
ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strstr.c\
ft_tolower.c ft_toupper.c ft_memset.c ft_bzero.c\
ft_memcpy.c ft_memmove.c ft_memcmp.c ft_calloc.c\
ft_memchr.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putnbr_fd.c ft_putendl_fd.c ft_itoa.c\
ft_strtrim.c ft_split.c ft_strjoin.c ft_substr.c\
ft_striteri.c ft_strmapi.c
OBJS = $(addprefix $(OBJ_PATH)/,$(SRC_FILES:.c=.o))

.PHONY: all clean fclean re
.SILENT: $(TARGET)

all : $(TARGET)

$(TARGET):$(OBJS)
	ar rcs $@ $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
	$(CC) $(CFLAGS) -I$(INC_PATH) -o $@ -c $<

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(TARGET)

re: fclean all

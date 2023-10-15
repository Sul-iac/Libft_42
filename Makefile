# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbarron <qbarron@student.42perpignan.fr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 00:21:31 by qbarron           #+#    #+#              #
#    Updated: 2023/10/15 14:27:30 by qbarron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
INC_PATH = .
SRC_PATH = .
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

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c\
ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
ft_lstclear.c

SRCS = $(addprefix $(SRC_PATH)/, $(SRC_FILES))
OBJS = $(addprefix $(OBJ_PATH)/, $(SRC_FILES:.c=.o))
BONUS_SRCS = $(addprefix $(SRC_PATH)/, $(BONUS_FILES))
BONUS_OBJS = $(addprefix $(OBJ_PATH)/, $(BONUS_FILES:.c=.o))

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c | $(OBJ_PATH)
	$(CC) $(CFLAGS) -I$(INC_PATH) -o $@ -c $<

$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all


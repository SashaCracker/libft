# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgummy <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/20 11:45:51 by sgummy            #+#    #+#              #
#    Updated: 2021/04/20 11:45:53 by sgummy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CORE = ft_bzero.c ft_memset.c ft_strlen.c ft_memcpy.c\
		ft_memmove.c ft_memccpy.c ft_memchr.c ft_memcmp.c\
 		ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c\
 		ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c\
 		ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_strnstr.c\
 		ft_strncmp.c ft_atoi.c ft_strdup.c ft_calloc.c\
 		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
        ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c\
        ft_putendl_fd.c ft_putnbr_fd.c

BONUS_PART = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
 			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
 			ft_lstlast.c ft_lstiter.c


OBJ = $(patsubst %.c,%.o,$(CORE))
OBJ_BONUS = $(patsubst %.c,%.o,$(BONUS_PART))

D_FILES = $(patsubst %.c,%.d,$(CORE) $(BONUS_PART))

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@ -MD

include $(wildcard $(D_FILES))

bonus:
	make OBJ="$(OBJ_BONUS)" all

clean:
	rm -f $(OBJ) $(OBJ_BONUS) $(D_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus



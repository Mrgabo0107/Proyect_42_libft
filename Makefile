# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gamoreno <gamoreno@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 18:26:55 by gamoreno          #+#    #+#              #
#    Updated: 2023/06/17 00:26:27 by gamoreno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

### COMPILATION ###

NAME		=	libft.a
CC			= 	cc
FLAGS		=	-Wall -Wextra -Werror
INCLUDES	=	-I $(HEADER)

### PATHS ###
SRC_PATH	=	sources/
HEADER		=	includes/
OBJ_PATH	=	objs/

### FILES ###
SOURCES		=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c\
				ft_split.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c\
				ft_isalpha.c ft_itoa.c ft_memcpy.c  ft_putendl_fd.c\
				ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c\
				ft_isascii.c ft_memmove.c ft_putnbr_fd.c  ft_strdup.c\
				ft_strlen.c  ft_strrchr.c ft_toupper.c ft_calloc.c\
				ft_isdigit.c ft_memchr.c  ft_memset.c ft_putstr_fd.c\
				ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c \
				ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c\
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c\
				ft_lstnew.c ft_lstsize.c

### FILE MANAGEMENT ###
SRCS		=	$(addprefix $(SRC_PATH),$(SOURCES))
OBJS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.c=.o))
DEPS		=	$(addprefix $(OBJ_PATH),$(SOURCES:.c=.d))	

### COLORS ###
NOC         = \033[0m
GREEN       = \033[1;32m
CYAN        = \033[1;36m

### RULES ###

all: header tmp $(NAME)

tmp:
		@mkdir -p $(OBJ_PATH)

$(NAME): $(OBJS)
		@ar rcs $(NAME) $(OBJS)
		@echo "$(GREEN) Library created with success.$(NOC)"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
		@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

clean:
		@$(RM) $(OBJ_PATH)
		@echo "$(GREEN) Non-executable files removed.$(NOC)"
		
fclean:	clean
		@$(RM) $(NAME)
		@echo "$(GREEN) Executable removed$(NOC)"

re:		fclean all

header:
		@echo "$$HEADER_PROJECT"

RM			=	rm -rf

-include $(DEPS)

.PHONY:		all clean fclean re bonus

define	HEADER_PROJECT
_______________________________________________________
||-------------------------------------------------------||
||.--.    .-._                        .----.             ||
|||==|____| |H|___            .---.___|""""|_____.--.___ ||
|||  |====| | |xxx|_          |+++|=-=|_  _|-=+=-|==|---|||
|||==|    | | |   | \         |   |   |_\/_|Black|  | ^ |||
|||  |    | | |   |\ \   .--. |   |=-=|_/\_|-=+=-|  | ^ |||
|||  |    | | |   |_\ \_( oo )|   |   |    |Magus|  | ^ |||
|||==|====| |H|xxx|  \ \ |''| |+++|=-=|""""|-=+=-|==|---|||
||`--^----'-^-^---'   `-' ""  '---^---^----^-----^--^---^||
||-------------------------------------------------------||
||-------------------------------------------------------||
||               ___                   .-.__.-----. .---.||
||              |===| .---.   __   .---| |XX|<(*)>|_|^^^|||
||         ,  /(|   |_|III|__|''|__|:x:|=|  |     |=| Q |||
||      _a'{ / (|===|+|   |++|  |==|   | |  |Illum| | R |||
||       '/\\/ _(|===|-|   |  |''|  |:x:|=|  |inati| | Y |||
||_____  -\{___(|   |-|   |  |  |  |   | |  |     | | Z |||
||       _(____)|===|+|[I]|DK|''|==|:x:|=|XX|<(*)>|=|^^^|||
||              `---^-^---^--^--'--^---^-^--^-----^-^---^||
||-------------------------------------------------------||
||_______________________________________________________||

endef
export HEADER_PROJECT
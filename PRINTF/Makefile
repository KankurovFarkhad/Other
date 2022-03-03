# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#   Makefile                                           :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: ohakon <ohakon@student.21-school.ru>       +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2021/11/22 17:58:51 by ohakon            #+#    #+#             #
#   Updated: 2021/11/22 17:58:51 by ohakon           ###   ########.fr       #
#                                                                            #
# ************************************************************************** #

NAME			=	libftprintf.a
HEADER			=	ft_printf.h
CC				=	gcc
CFLAGS			=	-Wall -Werror -Wextra -I
RM				=	rm -f
AR				=	ar rcs

SRC_FILES		=	ft_printf	\
					ft_process	\
					ft_put_c	\
					ft_put_d	\
					ft_put_p	\
					ft_put_s	\
					ft_put_u	\
					ft_put_x	\

SRC				=	$(addsuffix .c, $(SRC_FILES))
OBJ				=	$(addsuffix .o, $(SRC_FILES))

DEFAULT_COLOR	=	\033[0;39m
GREEN			=	\033[0;92m
YELLOW			=	\033[0;93m
BLUE			=	\033[0;94m
CYAN			=	\033[0;96m

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)
			@echo "$(GREEN)ft_printf compiled!$(DEFAULT_COLOR)"

%.o: %.c |
			@echo "$(YELLOW)Compiling: $< $(DEFAULT_COLOR)"
			@$(CC) $(CFLAGS) $(HEADER) -c $< -o $@

clean:
			@$(RM) -f $(OBJ)
			@echo "$(BLUE)ft_printf object files cleaned!$(DEFAULT_COLOR)"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "$(CYAN)ft_printf executable files cleaned!$(DEFAULT_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEFAULT_COLOR)"

.PHONY:		all clean fclean re

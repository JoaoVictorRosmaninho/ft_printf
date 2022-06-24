SRCS		=	ft_printf.c src/ft_printf_hex_lower.c src/ft_printf_hex_upper.c src/ft_printf_utils.c

OBJS		=	$(SRCS:%.c=%.o)

NAME		=	libftprintf.a

L_PATH		=	libft/

L_NAME		=	libft.a

COMPILE		=	cc

FLAGS		=	-g -Wall -Wextra -Werror

RM			=	rm -rf

%.o:	%.c
	@$(COMPILE) $(FLAGS) -c $< -o $(<:%.c=%.o)

all:	$(NAME)

$(NAME): $(OBJS)
	@ make --no-print-directory -C $(L_PATH)
	@mv $(L_PATH)/$(L_NAME) $@
	@ar -rc $(NAME) $(OBJS)
	@echo "\033[1;92mLibftPrintf		successfully created\033[0m"

clean:
	@$(RM) $(OBJS)
	@ make --no-print-directory clean -C $(L_PATH)

fclean:	clean
	@$(RM) $(NAME)
	@ make --no-print-directory fclean -C $(L_PATH)
	@echo "\33[1;93mLibftPrintf	successfully removed\33[0m"

re:	fclean	all

.PHONY:	all	clean	fclean	re

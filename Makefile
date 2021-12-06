# *****************************************************************
CC        := cc
CFLAGS    := -Wall -Wextra -Werror

# *****************************************************************
RM    := rm -f
AR    := ar rcs
# *****************************************************************
HEADER := ft_printf.h
# *****************************************************************
NAME    := libftprintf.a
SRCS_LIBFT    := $(addprefix libft/, ft_calloc.c ft_isdigit.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_memchr.c ft_memset.c ft_striteri.c ft_strlen.c	ft_strrchr.c ft_toupper.c \
				ft_isalnum.c ft_isprint.c ft_lstclear_bonus.c ft_lstmap_bonus.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
				ft_atoi.c ft_isalpha.c ft_itoa.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c ft_putstr_fd.c \
				ft_bzero.c ft_isascii.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstsize_bonus.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c )
SRCS    := 	ft_adress_fd.c ft_hexa_fd.c ft_putnbr_fd.c ft_putstr_printf_fd.c ft_printf.c unsigned_fd.c

OBJS    := $(SRCS:.c=.o) 
OBJS_LIBFT	:= $(SRCS_LIBFT:.c=.o)


# *****************************************************************
all:  $(NAME)

# test: 
# 	@ $(CC) $(CFLAGS) main.c $(NAME) -o main
# 	@ ./main

$(NAME):	$(OBJS)  $(OBJS_LIBFT) 
	@ $(AR) $(NAME) $(OBJS) $(OBJS_LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS) $(OBJS_bonus) $(OBJS_LIBFT) main
 
fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
# *****************************************************************
CC        := cc
CFLAGS    := -Wall -Wextra -Werror -g

# *****************************************************************
RM    := rm -f
AR    := ar rcs
# *****************************************************************
HEADER := libft.h
# *****************************************************************
NAME    := libftprintf.a
SRCS_LIBFT    := $(wildcard libft/*.c)
SRCS    := $(wildcard *.c)

OBJS    := $(SRCS:.c=.o) 
OBJS_LIBFT	:= $(SRCS_LIBFT:.c=.o)
OBJS_bonus    := $(SRCS_bonus:.c=.o)

# *****************************************************************
all:  $(NAME)  test

test: 
	@ $(CC) $(CFLAGS) main.c $(NAME) -o main
	@ ./main

$(NAME):	$(OBJS)  $(OBJS_LIBFT)
	@ $(AR) $(NAME) $(OBJS) $(OBJS_LIBFT)

# bonus:	all	$(OBJS_bonus)
# 	$(AR) $(NAME) $(OBJS_bonus)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS) $(OBJS_bonus) $(OBJS_LIBFT) main
 
fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
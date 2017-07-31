CC	:= gcc

RM	:= rm -rf

SRCS	:= des.c

OBJS	:= $(SRCS:.c=.o)

NAME	:= des

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean

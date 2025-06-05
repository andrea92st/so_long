NAME = so_long.a

CC = cc 

FLAGS = -Wall -Werror -Wextra

SRCS = main.c so_long.c create_game.c get_next_line.c \
		get_next_line_utils.c check_map.c 

AR = ar rcs

OBJS = $(SRCS:.c=.o)

RM = rm -f

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJS)
	$(AR) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean 
	$(RM) $(NAME)

re: fclean all

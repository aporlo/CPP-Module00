NAME	= megaphone
CC		= clang++
FLAGS = -Wall -Wextra -Werror

SRCS	= megaphone.cpp \

OBJS	= ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: all

rebonus: fclean bonus

.PHONY: norminette all ${NAME}
NAME	= phonebook
CC		= c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
			Contact.cpp \
			Phonebook.cpp \

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

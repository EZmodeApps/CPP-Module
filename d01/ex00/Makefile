NAME	=	zombie

SRCS	=	Zombie.cpp randomChump.cpp newZombie.cpp main.cpp

OBJS	=	${SRCS:.c=.o}

FLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	c++ $(FLAGS) $(SRCS) -I. -o $(NAME)

clean:
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re
NAME = megaphone

SRCS = megaphone.cpp

FLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re
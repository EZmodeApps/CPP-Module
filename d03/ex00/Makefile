NAME	=		claptrap

SRCS	=		$(shell find . -type f -name '*.cpp')

OBJS	=		${SRCS:.cpp=.o}

DEP 	=		$(OBJS:.o=.d)

CXX		=		c++

CXXFLAGS	=	-std=c++98 -Wall -Wextra -Werror

CPPFLAGS	=	-MMD -I.

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) $^ -o $@

clean:
	rm -f $(OBJS) $(DEP)

fclean:	clean
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re

-include $(DEP)

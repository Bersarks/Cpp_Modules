NAME	= BraiiiiiiinnnzzzZ
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= $(wildcard *.cpp)

OBJDIR	= obj
OBJS	= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
NAME	= Polymorphism
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98 -I./inc -Wshadow #-g
#-Wshadow proje içerisindeki tüm değişkenlerin isimlerinin farklı olması gerektiğini söyler. Bu şekilde bir değişkenin ismi ile başka bir değişkenin ismi aynı olursa uyarı verir.
#-Wno-shadow ise bu uyarıyı kapatır.

SRCDIR	= src
SRCS	= $(shell find src -name "*.cpp" | cut -c 5-)

OBJDIR	= obj
OBJS	= $(addprefix $(OBJDIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

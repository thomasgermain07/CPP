NAME = a.out
OBJSDIR = .objs
SRCS = main.cpp\
		Weapon.cpp\
		HumanB.cpp\
		HumanA.cpp
OBJS = $(addprefix $(OBJSDIR)/, $(SRCS:.cpp=.o))
DPDCS = $(OBJS:.o=.d)
CFLAGS = -Wall -Wextra -Werror

opti :
	@(make -j all)

all : $(NAME)

-include $(DPDCS)

$(NAME) : $(OBJS)
	@(clang++ $(CFLAGS) $(OBJS) -o $(NAME))
	@(echo "$(NAME) created")

$(OBJSDIR)/%.o : %.cpp | $(OBJSDIR)
	@(echo "Compiling -> $^")
	@(clang++ $(CFLAGS) -MMD -c $< -o $@)

$(OBJSDIR) :
	@(mkdir -p .objs)

clean :
	@(rm -f $(NAME))

fclean : clean
	@(rm -rf $(OBJSDIR))

re : fclean all


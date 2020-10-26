NAME = a.out
OBJSDIR = .objs
SRCS = main.cpp\
		Zombie.cpp\
		ZombieEvent.cpp
OBJS = $(addprefix $(OBJSDIR)/, $(SRCS:.cpp=.o))
DPDCS = $(OBJS:.o=.d)
CXXFLAGS = -Wall -Wextra -Werror
GXX = clang++

opti :
	@(make -j all)

all : $(NAME)

-include $(DPDCS)

$(NAME) : $(OBJS)
	@($(GXX) $(CXXFLAGS) $(OBJS) -o $(NAME))
	@(echo "$(NAME) created")

$(OBJSDIR)/%.o : %.cpp | $(OBJSDIR)
	@(echo "Compiling -> $^")
	@($(GXX) $(CXXFLAGS) -MMD -c $< -o $@)

$(OBJSDIR) :
	@(mkdir -p .objs)

clean :
	@(rm -f $(NAME))

fclean : clean
	@(rm -rf $(OBJSDIR))

re : fclean all


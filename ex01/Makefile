# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Program name
NAME = phonebook

# Source files
SRCS = main.cpp PhoneBook.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(NAME)

# Build the program
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJS)

# Clean everything (object files and executable)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets (not actual files)
.PHONY: all clean fclean re
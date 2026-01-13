# Compiler and flags
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Program name
NAME = megaphone

# Source files
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

# Default target
all: $(NAME)

# Build the program
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean object files
clean:
	rm -f $(OBJ)

# Clean everything (object files and executable)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets (not actual files)
.PHONY: all clean fclean re
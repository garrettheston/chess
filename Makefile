# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Source files with paths
SRC = \
    Game/Game.cpp \
    Game/GameFsm.cpp \
    Game/Validation.cpp \
    Game/Board.cpp \
    View/View.cpp \
    Controller/ViewController.cpp \
    main.cpp

# Object files (convert .cpp to .o while preserving paths)
OBJ = $(SRC:.cpp=.o)

# Final output binary
TARGET = chess_game

# Default target
all: $(TARGET)

# Link all object files to create the executable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile each source file into its object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(TARGET)

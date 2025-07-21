CXX = g++
CXXFLAGS = -Wall -std=c++17

# Source files with paths
SRC = \
    Model/Game.cpp \
    Model/GameFsm.cpp \
    Model/Validation.cpp \
    Model/Board.cpp \
    View/View.cpp \
    Controller/ViewController.cpp \
    Main/main.cpp

# Object files (just change .cpp to .o with path preserved)
OBJ = $(SRC:.cpp=.o)

TARGET = chess_game

all: $(TARGET)

$(TARGET): $(OBJ)
    $(CXX) $(CXXFLAGS) -o $@ $^

# Compile each .cpp to .o in its subfolder
%.o: %.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ) $(TARGET)

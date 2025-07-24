// This is the board header file for the game.
#pragma once

#include <vector>
#include <string>

#include "GameFsm.h"
#include "Validation.h"

enum Color 
{ 
    WHITE, 
    BLACK
};

enum Pieces
{ 
    PAWN,
    KNIGHT,
    BISHOP,
    ROOK,
    QUEEN,
    KING,
    NONE
};

struct Piece
{
    Color color;
    Pieces piece;

    // no default

    Piece(Color c, Pieces p)
    : color(c),
    piece(p)
    {
    }
};

class Board {

    public:

        // constructor invoking initialization
        Board();
        
        // initialize state that will fill the board with enumerations
        void propogate();
        
        // retrieving the state of the board
        std::vector<std::vector<Piece>>& getBoardState(); // TODO: make enumeration of pieces

        void destroy();

        // destructor
        ~Board();
        
    private:
        
        std::vector<std::vector<Piece>> board;

        
};
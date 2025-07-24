#pragma once
#include <map>

// Finite state machine acts as a machine that simply handles transitions into new states
    // I need to practice this because I use them a lot in work. They are common in embedded systems

// sep 27

enum class GameState {
	INITIALIZE,
	WAIT,
	VALIDATION,
	UPDATE,
    GAMEOVER
};

// Thoughts on how validate the movement within the chess board
// So typically in chess, you have rows and columns that are alphanumeric. So it's like a1, b2, c3
    // I might display them, but I need to represent the indices with numbers.
    // So I was thinking about representing the numbers with direction and magnitude.
        // If they go in a direction that is unacceptable for that piece, i.e. a pawn going backwards, it must fail validation
        // However, if they go in a magnitude that exceeds the bounds of the matrix, it must fail validation again.
            // So I need robust validation logic

// Treated like a hashmap, a key will correspond to a value.
// So I can transition to the next state by simply supplying the current state into the map and then it transitions
    // TODO: incorporeate more complex transition logic
std::map<GameState, GameState> gameStateTransitions = {
    {GameState::INITIALIZE, GameState::WAIT},
    {GameState::WAIT, GameState::VALIDATION},
    {GameState::VALIDATION, GameState::UPDATE},
    {GameState::UPDATE, GameState::GAMEOVER}
};

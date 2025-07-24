
// Basic validation rules based on chess movements

/*

pawn validation: x_o - x = 0, y_o - y = 1
rook validation: (x_o - x > 0 && y_o - y = 1) || (x_o - x > 1 && y_o - y = 0)
knight validation: l-shape= (x_o - x > 0 && y_o - y = 1)
bishop validation: abs(x) = abs(y) && x > 0

*/
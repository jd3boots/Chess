#ifndef _BOARD_ELEMENT_H
#define _BOARD_ELEMENT_H
#include <vector>

enum class PieceType { King, Queen, Bishop, Rook, Knight, Pawn};
enum class Colour { White, Black };

class BoardElement
{
	PieceType type;
	Colour col;
	bool isPiece;
public:
	BoardElement(bool isPiece = false):
		isPiece{isPiece}{}
};

#endif
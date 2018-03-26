#ifndef _GAME_BOARD_H
#define _GAME_BOARD_H
#include "boardelement.h"
#include <vector>

class GameBoard
{
	std::vector<std::vector<BoardElement>> board;
public:
	void init();
};

#endif

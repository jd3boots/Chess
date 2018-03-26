#include "empty.h"
#include "pawn.h"
#include "gameboard.h"
#include "boardelement.h"
#include "gamemaster.h"

using namespace std;

void GameBoard::init()
{
	std::vector<BoardElement> v;
	Empty e;
	for(int i = 0; i < board_size; i++)
	{
		for (int j = 0; j < board_size; ++j)
		{
			v.push_back(e);
		}
		board.push_back(v);
	}
} 

BoardElement GameBoard::getElement(int x, int y)
{
	return board[x][y];
}
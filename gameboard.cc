#include "empty.h"
#include "pawn.h"
#include "gameboard.h"
#include "boardelement.h"

using namespace std;

void GameBoard::init()
{
	std::vector<BoardElement> v;
	Empty e;
	for(int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; ++j)
		{
			v.push_back(e);
		}
		board.push_back(v);
	}
} 
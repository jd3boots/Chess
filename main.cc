#include "gameboard.h"
#include "piece.h"
#include "pawn.h"
#include "gamestate.h"
#include "gamemaster.h"
#include "textdisplay.h"
#include "empty.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	std::cout << "This is main" << std::endl;
	GameBoard gb;
	gb.init();
	GameState st;
	GameMaster gm;
	TextDisplay td(gb);
	gm.addObserver(&td);
	gm.notifyObservers(st);
	cout << td << endl;
}
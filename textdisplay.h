#ifndef _TEXT_DISPLAY_H
#define _TEXT_DISPLAY_H
#include "observer.h"
#include "gamestate.h"
#include <iostream>
#include <vector>

class TextDisplay: public Observer
{
    std::vector<std::vector<char>> theDisplay;
//    const int gridSize;
public:
    TextDisplay(GameBoard board);
	void notify(GameState state) override;
	
	friend std::ostream &operator<<(std::ostream &out, const TextDisplay &td);
};

#endif
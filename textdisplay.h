#ifndef _TEXT_DISPLAY_H
#define _TEXT_DISPLAY_H
#include "observer.h"
#include "gamestate.h"

class TextDisplay: public Observer
{

public:
	void notify(GameState state) override;
};

#endif
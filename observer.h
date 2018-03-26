#ifndef _OBSERVER_H
#define _OBSERVER_H
#include "gamestate.h"

class Observer {

public:
	virtual void notify(GameState state) = 0;
};

#endif
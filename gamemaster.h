#ifndef _GAME_MASTER_H
#define _GAME_MASTER_H
#include "subject.h"
#include "gamestate.h"

class GameMaster: public Subject
{
	GameState state;
public:
};

#endif
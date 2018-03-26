#ifndef _SUBJECT_H
#define _SUBJECT_H
#include "observer.h"
#include "gamestate.h"
#include <vector>
#include <iostream>

class Subject 
{
	std::vector<Observer*> observers;

protected:

public:
	void addObserver(Observer *ob);
	void notifyObservers(GameState state);
};

#endif
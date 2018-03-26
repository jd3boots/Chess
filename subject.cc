#include "subject.h"
#include <iostream>

void Subject::notifyObservers(GameState state) { for (auto &ob : observers) ob->notify(state); };

void Subject::addObserver(Observer *ob) { observers.emplace_back(ob); }

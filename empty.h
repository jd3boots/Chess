#ifndef _EMPTY_H
#define _EMPTY_H
#include "boardelement.h"

class Empty: public BoardElement
{
public:
	Empty():
		BoardElement{BoardElement(false)}{}
};

#endif
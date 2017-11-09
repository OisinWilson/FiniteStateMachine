#ifndef CLIMBING
#define CLIMBING

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include "State.h"

class Climbing : public State
{
public:
	Climbing();

	~Climbing();

	void idle(Animation* a);
};

#endif
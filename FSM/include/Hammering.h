#ifndef HAMMERING
#define HAMMERING

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"
#include"Animation.h"

class Hammering : public State
{
public:
	Hammering();
	~Hammering();

	void idle(Animation* a);
};
#endif
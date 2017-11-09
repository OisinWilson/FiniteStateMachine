#ifndef SHOVELLING
#define SHOVELLING

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"
#include"Animation.h"

class Shovelling : public State
{
public:
	Shovelling();
	~Shovelling();

	void idle(Animation* a);
};
#endif
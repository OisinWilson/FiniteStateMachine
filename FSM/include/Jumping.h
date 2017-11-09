#ifndef JUMPING
#define JUMPING

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"
#include"Animation.h"

class Jumping : public State
{
public:
	Jumping();
	~Jumping();

	void idle(Animation* a);
};
#endif
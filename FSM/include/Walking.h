#ifndef WALKING
#define WALKING

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"
#include"Animation.h"

class Walking : public State
{
public:
	Walking();
	~Walking();

	void idle(Animation* a);
};
#endif // !WALKING
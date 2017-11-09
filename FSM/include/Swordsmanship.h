#ifndef SWORDSMANSHIP
#define SWORDSMANSHIP

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"
#include"Animation.h"

class Swordsmanship : public State
{
public:
	Swordsmanship();
	~Swordsmanship();

	void idle(Animation* a);
};
#endif
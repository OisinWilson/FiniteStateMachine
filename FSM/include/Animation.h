#ifndef ANIMATION
#define ANIMATION

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

class Animation
{
	class State* current;

public:
	Animation();
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();
	void walking();
	void hammering();
	void shovelling();
	void swordsmanship();
};

#include"State.h"
#include"Idle.h"

#endif
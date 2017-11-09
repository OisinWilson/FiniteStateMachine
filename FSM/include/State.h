#ifndef STATE
#define STATE

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include<iostream>

class Animation;

class State
{
public:
	virtual void idle(Animation* a);
	virtual void jumping(Animation* a);
	virtual void climbing(Animation* a);
	virtual void walking(Animation* a);
	virtual void hammering(Animation* a);
	virtual void shovelling(Animation* a);
	virtual void swordsmanship(Animation* a);
};

#include"Animation.h"
#endif
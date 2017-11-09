#include "Walking.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Walking::Walking()
{
}

Walking::~Walking()
{
}

void Walking::idle(Animation * a)
{
	std::cout << "Going from Walking to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
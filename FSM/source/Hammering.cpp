#include "Hammering.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Hammering::Hammering()
{
}

Hammering::~Hammering()
{
}

void Hammering::idle(Animation * a)
{
	std::cout << "Going from Hammering to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

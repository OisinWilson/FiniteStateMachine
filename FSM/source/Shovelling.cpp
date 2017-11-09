#include "Shovelling.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Shovelling::Shovelling()
{
}

Shovelling::~Shovelling()
{
}

void Shovelling::idle(Animation * a)
{
	std::cout << "Going from Shoveling to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

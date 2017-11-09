#include "Swordsmanship.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Swordsmanship::Swordsmanship()
{
}

Swordsmanship::~Swordsmanship()
{
}

void Swordsmanship::idle(Animation * a)
{
	std::cout << "Going from SwordsManship to Idling" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

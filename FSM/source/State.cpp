#include"State.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

void State::idle(Animation * a)
{
	std::cout << "State::Idling" << std::endl;
}

void State::jumping(Animation * a)
{
	std::cout << "State::Jumping" << std::endl;
}

void State::climbing(Animation * a)
{
	std::cout << "State::Climbing" << std::endl;
}

void State::walking(Animation * a)
{
	std::cout << "State::Walking" << std::endl;
}

void State::hammering(Animation * a)
{
	std::cout << "State::Hammering" << std::endl;
}

void State::shovelling(Animation * a)
{
	std::cout << "State::Shovelling" << std::endl;
}

void State::swordsmanship(Animation * a)
{
	std::cout << "State::Swordsmanship" << std::endl;
}

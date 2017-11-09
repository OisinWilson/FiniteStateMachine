#include"Animation.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Animation::Animation()
{
	current = new Idle();
}

void Animation::setCurrent(State * s)
{
	current = s;
}

void Animation::idle()
{
	current->idle(this);
}

void Animation::jumping()
{
	current->jumping(this);
}

void Animation::climbing()
{
	current->climbing(this);
}

void Animation::walking()
{
	current->walking(this);
}

void Animation::hammering()
{
	current->hammering(this);
}

void Animation::shovelling()
{
	current->shovelling(this);
}

void Animation::swordsmanship()
{
	current->swordsmanship(this);
}

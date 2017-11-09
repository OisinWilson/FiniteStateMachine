#include"Idle.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Idle::Idle()
{
}

Idle::~Idle()
{
}

void Idle::jumping(Animation* a)
{
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a)
{
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::idle(Animation * a)
{
	a->setCurrent(new Idle());
	delete this;
}

void Idle::walking(Animation * a)
{
	a->setCurrent(new Walking());
	delete this;
}

void Idle::hammering(Animation * a)
{
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::shovelling(Animation * a)
{
	a->setCurrent(new Shovelling());
	delete this;
}

void Idle::swordsmanship(Animation * a)
{
	a->setCurrent(new Swordsmanship());
	delete this;
}

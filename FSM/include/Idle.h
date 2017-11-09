#ifndef IDLE
#define IDLE

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"State.h"

class Animation;
class Jumping;
class Climbing;
class Walking;
class Hammering;
class Shovelling;
class Swordsmanship;

class Idle : public State
{
public:
	Idle();
	~Idle();
	
	void jumping(Animation* a);
	void climbing(Animation* a);
	void idle(Animation* a);
	void walking(Animation* a);
	void hammering(Animation* a);
	void shovelling(Animation* a);
	void swordsmanship(Animation* a);
};

#include"Animation.h"
#include"Jumping.h"
#include"Climbing.h"
#include"Walking.h"
#include"Hammering.h"
#include"Swordsmanship.h"
#include"Shovelling.h"

#endif
#ifndef GAME
#define GAME

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

#include"Animation.h"
#include<chrono>
#include<thread>
#include<iostream>
#include<SFML\Graphics.hpp>

class Game
{
public:
	Game();
	~Game();

	Animation fsm;
	int i;

	sf::Clock clock;
	sf::Time timer;

	void Run();
	void Render(int i);

	sf::Font font;
	sf::Text text;

	sf::Texture hammerTexture;
	sf::Texture swordTexture;
	sf::Texture jumpTexture;
	sf::Texture idleTexture;
	sf::Texture walkTexture;
	sf::Texture climbingTexture;
	sf::Texture shovelTexture;

	//sf::RectangleShape image[7];

	sf::Sprite image[7];

	sf::RenderWindow m_window;
};

#endif
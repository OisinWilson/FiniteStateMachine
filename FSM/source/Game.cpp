#include"Game.h"

/// <summary>
/// @Author Oisin Wilson
/// @Login C00213826
/// @ Finite state maching first attempt
/// </summary>

Game::Game(): m_window(sf::VideoMode(900, 700), "SFML Playground", sf::Style::Default)
{
	m_window.setVerticalSyncEnabled(true);
	if (!font.loadFromFile("assets/Font/Queen of Clubs.otf"))
	{
		std::cout << "Error font" << std::endl;
	}
	text.setFont(font);
	text.setString("1: Jump\n2: Climb\n3: Hammer\n4: Shovel\n5: Sword\n6: Walk");
	text.setCharacterSize(20);
	text.setPosition(100, 200);

	if (!hammerTexture.loadFromFile("assets/Images/hammer.png"))
	{
		std::cout << "Error font" << std::endl;
	}
	if (!shovelTexture.loadFromFile("assets/Images/shovel.png"))
	{ 
		std::cout << "Error font" << std::endl;
	}
	if (!climbingTexture.loadFromFile("assets/Images/climb.png"))
	{
		std::cout << "Error font" << std::endl; 
	}
	if (!jumpTexture.loadFromFile("assets/Images/jump.png"))
	{ 
		std::cout << "Error font" << std::endl;
	}
	if (!idleTexture.loadFromFile("assets/Images/idle.png"))
	{ 
		std::cout << "Error font" << std::endl;
	}
	if (!walkTexture.loadFromFile("assets/Images/walk.png"))
	{ 
		std::cout << "Error font" << std::endl;
	}
	if(!swordTexture.loadFromFile("assets/Images/sword.png"))
	{
		std::cout << "Error font" << std::endl;
	}

	image[0].setTexture(idleTexture);
	image[1].setTexture(jumpTexture);
	image[2].setTexture(climbingTexture);
	image[3].setTexture(hammerTexture);
	image[4].setTexture(shovelTexture);
	image[5].setTexture(swordTexture);
	image[6].setTexture(walkTexture);

	image[1].setScale(0.6f, 0.6f);
	image[2].setScale(0.5f, 0.5f);
	image[4].setScale(0.4f, 0.4f);
	image[5].setScale(0.45f, 0.45f);
	image[6].setScale(0.1f, 0.1f);

	for (int x = 0; x <= 6; x++)
	{
		image[x].setPosition(350, 250);
	}
}

Game::~Game()
{
}

void Game::Run()
{
	i = 0;
	clock.restart();
	timer = clock.getElapsedTime();

	Render(0);

	while (true)
	{
		timer = clock.getElapsedTime();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
		{
			i = 1;
			clock.restart();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
		{
			i = 2;
			clock.restart();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num3))
		{
			i = 3;
			clock.restart();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num4))
		{
			i = 4;
			clock.restart();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num5))
		{
			i = 5;
			clock.restart();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num6))
		{
			i = 6;
			clock.restart();
		}


		switch (i)
		{
		case 0:
		{
			if (timer.asSeconds() > 0.35f)
			{
				fsm.idle();
				Render(0);
				i = -1;
			}
			break;
		}
		case 1:
		{
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(1);
			break;
		}
		case 2:
		{
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(2);
			break;
		}
		case 3:
		{
			fsm.hammering();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(3);
			break;
		}
		case 4:
		{
			fsm.shovelling();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(4);
			break;
		}
		case 5:
		{
			fsm.swordsmanship();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(5);
			break;
		}
		case 6:
		{
			fsm.walking();
			std::this_thread::sleep_for(std::chrono::milliseconds(150));
			i = 0;
			Render(6);
			break;
		}
		default:
			break;
		}
	}
}

void Game::Render(int x)
{
	m_window.clear();
	m_window.draw(text);
	m_window.draw(image[x]);
	m_window.display();
}

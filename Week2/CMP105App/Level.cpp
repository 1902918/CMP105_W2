#include "Level.h"
#include <iostream>
using namespace std;

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects

}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{
	if (input->isKeyDown(sf::Keyboard::W))
	{
		cout << "The W key is pressed.\n";
		input->setKeyUp(sf::Keyboard::W);
	}

	if (input->isKeyDown(sf::Keyboard::J) && input->isKeyDown(sf::Keyboard::K) && input->isKeyDown(sf::Keyboard::L))
	{
		cout << "The J, K and L keys are pressed.\n";
		input->setKeyUp(sf::Keyboard::J);
		input->setKeyUp(sf::Keyboard::K);
		input->setKeyUp(sf::Keyboard::L);
	}

}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}

// Begins rendering to the back buffer. Background colour set to black.
void Level::beginDraw()
{
	window->clear(sf::Color(0,0,0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}
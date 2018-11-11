#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Poo.h"
#include "Dude.h"
#include <random>

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	void DrawGameOver(int x, int y);
	void DrawTitleScreen(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */

	std::random_device(rd);
	std::mt19937 rng;
	std::uniform_int_distribution<int> xDist;
	std::uniform_int_distribution<int> yDist;
	Dude dude;
	Poo poo0;
	Poo poo1;
	Poo poo2;
	bool IsStarted = false;
	/********************************/
};
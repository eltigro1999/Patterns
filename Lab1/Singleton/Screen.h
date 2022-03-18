#pragma once

class GameScreen {
	int PixelsX = 1024;
	int PixelsY = 768;
	//Default Constructor, Copy Constructor and operator = are unavailable
	GameScreen();
	GameScreen(const GameScreen&);
	GameScreen& operator=(GameScreen&)=delete;
public:
	static GameScreen& GetGameScreen();
	void SetResolution(const int& PixelsX_, const int& PixelsY_);
};
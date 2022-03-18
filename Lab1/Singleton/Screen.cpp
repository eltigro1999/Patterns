#include "Screen.h"

GameScreen::GameScreen(){};

GameScreen::GameScreen(const GameScreen&) {};

GameScreen& GameScreen::GetGameScreen() {
	static GameScreen screen;
	return screen;
}

void GameScreen::SetResolution(const int& PixelsX_, const int& PixelsY_) {
	PixelsX = PixelsX_;
	PixelsY = PixelsY_;
}

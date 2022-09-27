#pragma once

// setup SDL
#include <SDL.h>

class Game
{
public:
	// constructor
	Game();
	// deconstructor
	~Game();

private:
	// the window that we will be rendering to
	SDL_Window* SdlWindow;
	// 2D Renderer
	SDL_Renderer* SdlRenderer;
	// flag for the game loop
	bool bIsGameOver;

public:

	// Create the renderer
	// Allocate any objects we want
	bool Start();

	// handle any inputs from the player that happens last call
	void ProcessInput();

	// run on every tick - frame
	void Update();

	// draw the game images to the screen
	void Draw();

	// this will create the window and begin the game loop
	// @ param 1 - title for the window
	// @ param 2 - width of the window
	// @ param 3 - height of the window
	// @ param 4 - whether or not we fullscreen
	void Run(const char* title, int width, int height, bool fullscreen);

	// dealocte objects from memory
	void Shutdown();

	// Shutdown the SDL Framework delete the renderer from memory
	void Destroy();
};

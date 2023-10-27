#pragma once
struct SDL_Renderer;
struct SDL_Texture;
class Tank
{
public:
	Tank(SDL_Renderer* renderer, SDL_Texture* texture, int x, int y);
	int MoveUp();
	int MoveDown();
	int MoveLeft();
	int MoveRight();
	int GetXValue()const;
	int GetYValue()const;
	void Render();
	
private:
	SDL_Renderer* Renderer;
	SDL_Texture* Texture; 
	int X;
	int Y;
	int tankWidth = 40;
	int tankHeight = 35;
};


#include "Tank.h"
#include "SDL.h"

Tank::Tank(SDL_Renderer* renderer, SDL_Texture* texture, int x, int y) 
{
	Renderer = renderer;
	Texture = texture; 
	X = x;
	Y = y; 
}

int Tank::MoveUp()
{
	--Y;
	return Y;
}

int Tank::MoveDown()
{
	++Y;
	return Y;
}

int Tank::MoveLeft()
{
	--X;
	return X;
}


int Tank::MoveRight()
{
	++X;
	return X; 
}

int Tank::GetXValue() const
{
	return X;
}

int Tank::GetYValue() const
{
	return Y;
}

void Tank::Render()
{
	SDL_Rect tankRect{ X,Y,tankWidth,tankHeight };
	SDL_RenderCopy(Renderer, Texture, NULL, &tankRect);
}

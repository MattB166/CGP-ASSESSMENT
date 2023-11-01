#pragma once
#include "SDL.h"
class GameObject
{

public: 
	GameObject();
	GameObject(SDL_Texture* texture);

	float m_x = 0;
	float m_y = 0;
	float m_w = 0;
	float m_h = 0;
	SDL_Texture* m_texture = nullptr;
	SDL_Renderer* renderer;

	virtual void Draw(SDL_Renderer* renderer);
};


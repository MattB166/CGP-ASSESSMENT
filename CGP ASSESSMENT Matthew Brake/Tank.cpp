#include "Tank.h"
#include "SDL.h"
#include <iostream>



Tank::Tank()
{
	
}

Tank::Tank(SDL_Texture* baseTexture, SDL_Texture* barrelTexture)
{
	m_texture = baseTexture; 
	m_barrelTexture = barrelTexture;
	std::cout << "Tank Created" << std::endl;
	m_w = 40;
	m_h = 35;
	m_x = 50;
	m_y = 50;
	boxCollider.m_height = 35;
	boxCollider.m_width = 40;
	/////need to set min and max x and y values for collision function 
	
	
}



int Tank::MoveUp()
{
	--m_y;
	return m_y;
}

int Tank::MoveDown()
{
	++m_y;
	return m_y;
}

int Tank::MoveLeft()
{
	--m_x;
	return m_x;
}


int Tank::MoveRight()
{
	++m_x;
	return m_x; 
}

int Tank::GetXValue() const
{
	return m_x;
}

int Tank::GetYValue() const
{
	return m_y;
}

void Tank::Draw(SDL_Renderer* renderer)
{
	GameObject::Draw(renderer);
	int x = m_x + m_w / 2 - 8 / 2; /// setting barrel width 
	int y = m_y + m_h / 2;  ///setting barrel height 
	SDL_Rect dstRect{ x ,y ,m_w / 5,m_h / 1.3 }; //sets barrel dest to correct position
	SDL_RenderCopy(renderer, m_barrelTexture, NULL, &dstRect); /// renders to renderer 


}




void Tank::changeTexture(SDL_Texture* baseTexture, SDL_Texture* newTexture)  ////changes texture on command between 2, useful for landmines flashing 
{
	if (m_texture != newTexture)
	{
		m_texture = newTexture;
		GameObject::Draw(renderer);
	}
	else
	{
		m_texture = baseTexture;
		GameObject::Draw(renderer);
	}

	
}

void Tank::SetPosition(int x , int y)
{
	m_x = x;
	m_y = y;
}





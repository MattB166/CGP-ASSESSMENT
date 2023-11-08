#include "TankSpawner.h"
#include "Tank.h"
#include <iostream>



TankSpawner::TankSpawner()
{
	
}

TankSpawner::TankSpawner(SDL_Texture* BaseTexture, SDL_Texture* BarrelTexture)
{
	enemyBaseTexture = BaseTexture;
	enemyBarrelTexture = BarrelTexture; 
	enemyCollider.m_width = 100;
	enemyCollider.m_height = 100;
}



void TankSpawner::SpawnTank(int amountOfTanks)
{
	for (int i = 0; i < amountOfTanks; i++)
	{
		//Tank enemyTank;
		//spawnedTanks.push_back(&enemyTank);
		spawnedTanks.push_back(new Tank());
		
		////need to assign random dst rects 

		std::cout << "Tanks Created: " << spawnedTanks.size() << std::endl; 
	}
    

}

void TankSpawner::DrawTanks(SDL_Renderer* renderer)
{
	for (Tank* tank : spawnedTanks)
	{
		tank->Draw(renderer);
		
	}
}















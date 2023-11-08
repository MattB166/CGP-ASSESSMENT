#include "EnemyTankSpawner.h"
#include "Tank.h"
#include <iostream>



EnemyTankSpawner::EnemyTankSpawner()
{
	
}

EnemyTankSpawner::EnemyTankSpawner(SDL_Texture* BaseTexture, SDL_Texture* BarrelTexture)
{
	enemyBaseTexture = BaseTexture;
	enemyBarrelTexture = BarrelTexture; 
	enemyCollider.m_width = 1;
	enemyCollider.m_height = 1;
    

	

	
	
}

EnemyTankSpawner::~EnemyTankSpawner()
{
	for (Tank* tank:spawnedTanks)
	{
		delete tank;
	}
}



void EnemyTankSpawner::SpawnTank(int amountOfTanks)
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

void EnemyTankSpawner::DrawTanks(SDL_Renderer* renderer)
{
	
	for (Tank* tank : spawnedTanks)
	{
		tank->Draw(renderer);
		
	}
}

void EnemyTankSpawner::AssignID()
{
	for (int i = 0; i < spawnedTanks.size(); i++)
	{
		///assign id for each tank as it is created 
	}
}


















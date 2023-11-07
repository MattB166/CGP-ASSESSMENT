#include "TankSpawner.h"
#include "Tank.h"
#include <iostream>



TankSpawner::TankSpawner()
{
	
}



void TankSpawner::SpawnTank(int amountOfTanks)
{
	for (int i = 0; i < amountOfTanks; i++)
	{
		Tank enemyTank;
		spawnedTanks.push_back(enemyTank);

		std::cout << "Tanks Created: " << spawnedTanks.size() << std::endl; 
	}
    

}

void TankSpawner::DrawTanks()
{

}















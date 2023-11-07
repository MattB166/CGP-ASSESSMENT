#pragma once
#include <vector>


class Tank;
class TankSpawner
{
public:

	TankSpawner();
	void SpawnTank(int amountOfTanks);
	void DrawTanks();
	
	
	


private:

	std::vector<Tank> spawnedTanks; 
	SDL_Texture* enemyBaseTexture; 
	SDL_Texture* enemyBarrelTexture; 
	SDL_Renderer* renderer;
};


#pragma once
#include <vector>
#include "SDL.h"
#include "BoxCollider.h"


class Tank;
class TankSpawner
{
public:

	TankSpawner();
	TankSpawner(SDL_Texture* BaseTexture, SDL_Texture* BarrelTexture);
	~TankSpawner();
	void SpawnTank(int amountOfTanks);
	void DrawTanks(SDL_Renderer* renderer);
	BoxCollider enemyCollider;
	void AssignID();
	
	
	


private:

	std::vector<Tank*> spawnedTanks; 
	SDL_Texture* enemyBaseTexture; 
	SDL_Texture* enemyBarrelTexture; 
	SDL_Renderer* renderer;
	int ID; 
};


#include <raylib.h>
#include "gameMain.h"
#include <asserts.h>
#include<assetManager.h>

#include <iostream>
#include <fstream>

struct GameData
{	
}gameData;

AssetManager assetManager;

bool initGame()
{
	bool thingsAreOK = false;

	permaAssertComment(thingsAreOK = true, "error, things are noit ok :/");

	assetManager.loadAll();

	return true;
}

bool updateGame()
{

	float deltaTime = GetFrameTime();
	if (deltaTime > 1.f / 5) { deltaTime = 1.f / 5.f; }

	DrawTexturePro(assetManager.dirt, { 0,0,(float)assetManager.dirt.width, (float)assetManager.dirt.height },
		{ 50,50,100,100 }, {}, 0, WHITE);
	
	return true;
}

void closeGame()
{
	//reset game
	gameData = {};
	//

	/*std::ofstream file{ RESOURCES_PATH "f.txt" };
	file << "Closed\n";
	file.close();*/

}

void loadLevel() 
{
	//resets the game state.
	gameData = {};
	//...do loading stuff
}
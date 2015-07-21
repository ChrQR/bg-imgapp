#include "GameLogic.h"



GameLogic::GameLogic()
{
	//skriv program her

	//white total value
	iWhiteTotal = 167;
	//white current value
	iWhiteCurrent = 167;

	//black total value
	iBlackTotal = 167;
	//black current value
	iBlackCurrent = 167;

	Tile Tiles[2][13];
	for (int i = 0; i < 2; i++)//defines the 26 tiles later to define their pos aswell
	{
		for (int j = 0; j < 13; j++)
		{
			Tiles[i][j] = new Tile();
		}
	}
		
}


GameLogic::~GameLogic()
{
}

//define the tiles.
//assign tiles a white and a black value
//send the values of the tiles to iWhiteCurrentInteger || iBlackCurrentInteger
//



//Tile class used to define position as well as value relative to piece colour.
class Tile {
	float fPosX;
	float fPosY;
	float fPosX2;
	float fPostY2;
	int iWhiteValue;
	int iBlackValue;
	
	Tile() {

	};
}

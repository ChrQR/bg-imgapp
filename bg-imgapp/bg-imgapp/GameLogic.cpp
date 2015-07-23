#include "GameLogic.h"



GameLogic::GameLogic()
{
	//skriv program her

	//white total value
	int iWhiteTotal = 167;
	//white current value
	int iWhiteCurrent = 167;

	//black total value
	int iBlackTotal = 167;
	//black current value
	int iBlackCurrent = 167;

	Tile Tiles[2][13];
	for (int i = 0; i < 2; i++) //defines the number of tiles in the height
	{
		for (int j = 0; j < 13; j++) //defines the number og tiles width
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

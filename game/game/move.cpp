#include <iostream>
using namespace std;

#define height 26
#define wieght 25

void moveKEYS(char field[height][wieght], char playerAction, int playerCoords[2]) {
	int lastcoords[2];
	lastcoords[0] = playerCoords[0];
	lastcoords[1] = playerCoords[1];
	if (playerAction == 'W' || playerAction == 'w')
	{
		playerCoords[0]--;
	}
	else if (playerAction == 'S' || playerAction == 's')
	{
		playerCoords[0]++;
	}
	else if (playerAction == 'A' || playerAction == 'a')
	{
		playerCoords[1]--;
	}
	else if (playerAction == 'D' || playerAction == 'd')
	{
		playerCoords[1]++;
	}
	if (field[playerCoords[0]][playerCoords[1]] == ' ')
		field[lastcoords[0]][lastcoords[1]] = ' ';
	else {
		playerCoords[0] = lastcoords[0];
		playerCoords[1] = lastcoords[1];
	}


}

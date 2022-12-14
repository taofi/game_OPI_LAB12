#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "Placing.cpp"
#include "move.cpp"
#include "earn.cpp"


#define wieght 25
#define height 26
#define player '†'
#define border '#'

using namespace std;

void blocks(char field[height][wieght]);

void Draw(char field[height][wieght])
{
	system("cls");
	for (int i = 0; i < height; i++)
	{
		cout << field[i] << endl;
	}
}

void CreateField(char field[height][wieght])
{
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < wieght; j++)
			if (i == 0 || j == 0 || j == wieght - 2 || i == height - 1)
				field[i][j] = border;
			else
				field[i][j] = ' ';
		field[i][wieght - 1] = '\0';
	}
}
int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));
	char field[height][wieght];
	int playerCoords[2] = { height / 2, wieght / 2 };
	char playerAction;
	int RCounter = 0;
	CreateField(field);
	for (int i = 0; i < 20; i++) {
		blocks(field);
	}
	while (true)
	{ 
		field[playerCoords[0]][playerCoords[1]] = player;
		field[0][0] = RCounter + 48;
		Draw(field);
		Sleep(0);
		playerAction = _getch();
		switch (playerAction)
		{
		case 'q':
		case 'Q':
		{
			if (RCounter > 0){
			PlaceBlock(field, playerCoords, RCounter);
			RCounter--;
			}
			break;
		}
		case 'e':
		case 'E':
		{
			EarnBlock(field, playerCoords, RCounter);
			break;
		}
		}
		moveKEYS(field, playerAction, playerCoords);
	}
	field[0][0] = RCounter + 48;

}

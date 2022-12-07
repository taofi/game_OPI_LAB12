#include <iostream>
#include <stdio.h>
#include <windows.h>
#include "Placing.cpp"


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
	char field[height][wieght];
	int playerCoords[2] = { height / 2, wieght / 2 };
	char playerAction;
	CreateField(field);
	while (true)
	{ 
		field[playerCoords[0]][playerCoords[1]] = player;
		Draw(field);
		Sleep(0);
		cin >> playerAction;
		switch (playerAction)
		{
		case 'q':
		{
			PlaceBlock(field, playerCoords);
		}
		}
	}
	

}

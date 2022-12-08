#define width 25
#define height 26
#define resource '*'

void EarnBlock(char field[height][width], int playerCoords[2], int &Resources)
{
	
	char EarnDirection;
	EarnDirection = _getch();
	int x = playerCoords[0];
	int y = playerCoords[1];
	switch (EarnDirection)
	{
	case 'w':
	case 'W':
	{
		x -= 1;
		if (field[x][y] == '*') {
			Resources++;
			field[x][y] = ' ';
		}
		break;
	}
	case 'd':
	case 'D':
	{
		y += 1;
		if (field[x][y] == '*') {
			Resources++;
			field[x][y] = ' ';
		}
		break;
	}
	case 's':
	case 'S':
	{
		x += 1;
		if (field[x][y] == '*') {
			Resources++;
			field[x][y] = ' ';
		}
		break;
	}
	case 'a':
	case 'A':
	{
		y -= 1;
		if (field[x][y] == '*') {
			Resources++;
			field[x][y] = ' ';
		}
		break;
	}
	}
	
}
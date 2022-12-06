#define width 25
#define height 26
#define resource '*'

void EarnBlock(char field[height][width], int playerCoords[2], int &Resources)
{
	
	char EarnDirection;
	std::cin >> EarnDirection;
	int x = playerCoords[0];
	int y = playerCoords[1];
	switch (EarnDirection)
	{
	case 'w':
	{
		x -= 1;
		if (field[x][y] == '*') Resources++;
		field[x][y] = ' ';
		break;
	}
	case 'd':
	{
		y += 1;
		if (field[x][y] == '*') Resources++;
		field[x][y] = ' ';
		break;
	}
	case 's':
	{
		x += 1;
		if (field[x][y] == '*') Resources++;
		field[x][y] = ' ';
		break;
	}
	case 'a':
	{
		y -= 1;
		if (field[x][y] == '*') Resources++;
		field[x][y] = ' ';
		break;
	}
	}
	
}
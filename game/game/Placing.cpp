#define width 25
#define height 26
#define block '='

void PlaceBlock(char field[height][width], int playerCoords[2], int &Resources)
	{
	char PlaceDirection;
	std::cin >> PlaceDirection;
	int x = playerCoords[0];
	int y = playerCoords[1];
	if (Resources > 0) {
	switch (PlaceDirection)
	{
	case 'w':
	{
		x -= 1;
		field[x][y] = block;
		break;
	}
	case 'd':
	{
		y += 1;
		field[x][y] = block;
		break;
	}
	case 's':
	{
		x += 1;
		field[x][y] = block;
		break;
	case 'a':
	{
		y -= 1;
		field[x][y] = block;
		break;
	}
	default:
		break;
	}
	}
	}
}
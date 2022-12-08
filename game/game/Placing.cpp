#define width 25
#define height 26
#define block '='

void PlaceBlock(char field[height][width], int playerCoords[2], int &Resources)
	{
	char PlaceDirection;
	PlaceDirection = _getch();
	int x = playerCoords[0];
	int y = playerCoords[1];
	if (Resources > 0) {
	switch (PlaceDirection)
	{
	case 'w':
	case 'W':
	{
		x -= 1;
		if (field[x][y] == ' ') {
			field[x][y] = block;
		}
		else Resources++;
		break;
	}
	case 'd':
	case 'D':
	{
		y += 1;
		if (field[x][y] == ' ') {
			field[x][y] = block;
		}
		else Resources++;
		break;
	}
	case 's':
	case 'S':
	{
		x += 1;
		if (field[x][y] == ' ') {
			field[x][y] = block;
		}
		else Resources++;
		break;
	case 'a':
	case 'A':
	{
		y -= 1;
		if (field[x][y] == ' ') {
			field[x][y] = block;
		}
		else Resources++;
		break;
	}
	default:
		break;
	}
	}
	}
}
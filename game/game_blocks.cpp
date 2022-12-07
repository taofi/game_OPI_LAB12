void blocks(char field[height][wieght]) {
    int blockX, blockY;
    blockX = rand() % (wieght - 2);
    blockY = rand() % (height - 2);
    field[blockY][blockX] = '*';

}

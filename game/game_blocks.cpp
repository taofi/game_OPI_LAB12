void blocks(char field[height][wieght]) {
    int blockX, blockY;
    blockX = rand() % wieght + 1;
    blockY = rand() % heigh + 1;
    field[blockY][blockX] = '*';

}

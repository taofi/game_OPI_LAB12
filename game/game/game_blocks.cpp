
#include <ctime>
#include <iostream>
#include <stdio.h>
#include <windows.h>

#define wieght 25
#define height 26

void blocks(char field[height][wieght]) {
    int blockX, blockY;
    blockX = 1 + rand() % (wieght - 2);
    blockY = 1 + rand() % (height - 2);
    field[blockY][blockX] = '*';

}

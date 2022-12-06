#include <stdlib.h>

#define width 25
#define height 26


void blocks(char field[height][width]) {
    int blockX, blockY;
    blockX = rand() % (width - 2);
    blockY = rand() % (height - 2);
    field[blockY][blockX] = '*';
}
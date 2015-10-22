#include <iostream>
#include <fstream>

#include "image.h"

void Image::Image(int numRow, int numCol, int greyLevel)
{
    R = numRow;
    C = numCols;
    L = greyLevel;

    pixelValue = new int *[R];
    for (int i = 0; i < C; i++) 
    {
        pixelValue[j] = new int [C];
        for (int j = 0; j < C; j++)
            pixelValue[i][j] = 0;
    }
}

void setImageInfo(int numRow, int numCol, int maxValue)
{
    R = numRow;
    C = numCol;
    L = maxValue;
}

void getImageInfo(int &numRow, int &numCol, int &maxValue)
{
    numRow = R;
    numCol = C;
    maxValue = L;
}

int Image::getPixelValue(int row, int col)
{
    return pixelValue[row][col];
}

int Image::setPixelValue(int row, int col, int value)
{
    pixelValue[row][col] = value;
}

#ifndef IMAGE_H
#define IMAGE_H

class Image 
{
    public:
        Image(int numRow, int numCol, int greyLevels);

        void setImageInfo (int numRow, int numCol, int maxVal);
        void getImageInfo (int &numRow, int &numCol, int &maxVal);

        int getPixelValue (int row, int col);
        void setPixelValue (int row, int col, int value);

    private: 
        int R;
        int C;
        int L; 
        int **pixelValue;   
}

#endif

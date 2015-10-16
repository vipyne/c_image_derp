#include <iostream>
#include <fstream>

//#include "image.h"
//#include "godhelpme.cc"

int main (int argc, char *argv[]) 
{
    //int R, C, L;
    //int value;

    std::ifstream file;
    size_t size = 0;
    char* data = 0;
    
    file.open(argv[1], std::ios::in | std::ios::binary);
    file.seekg(0, std::ios::end);
    size = file.tellg();

    std::cout << "file size: " << size << std::endl;

    return 0;
}

#include <iostream>
#include <fstream>

//#include "image.h"
//#include "image.cc"

int main (int argc, char *argv[]) 
{
    std::cout << "now we're here" << std::endl;
    std::ifstream file (argv[1], std::ifstream::binary);

    if (file) {
        file.seekg(0, file.end);

        int length = file.tellg();

        file.seekg(0, file.beg);

        char* buffer = new char[length];

        file.read(buffer, length);



        // int count = file.gcount();
        // std::cout << count << std::endl;

        file.seekg(length/12, file.beg);

        int middle = file.tellg();

        char* middleBuffer = new char[middle];

        file.read(middleBuffer, middle);

        // char c;

        // while (file.get(c)) {
        //     std::cout << c;
        // }

        file.seekg(0, file.cur);

        char derp = file.get();

        file.close();
        std::cout << length << std::endl;
        std::cout << middle << std::endl;
        std::cout << derp << std::endl;

    }

    std::cout << "started from the bottom" << std::endl;
    return 0;
}

#include "main.h"



uint8_t hammingDistance(uint8_t n1, uint8_t n2)
{
    uint8_t x = n1 ^ n2; // XOR
    uint8_t setBits = 0;
    while (x > 0)
    {
        setBits += x & 1;
        x >>= 1;
    }
    return setBits;
}

void makeFile(const string nameFile, const int x, const char value)
{
    ofstream myFile(nameFile);
    int i = 0;

        for (i = 0; i < x; i++) {
            myFile << value;

        }
}


cout << "Program liczacy BER" << endl;


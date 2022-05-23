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


void Compare(const char* File1, const char* File2) {
    ifstream file1 (File1, ios::binary);
    ifstream file2 (File2, ios::binary);
    char a{};
    char b{};
    long long int  iBit = 0, ber = 0;

    while (!file1.eof())
    {
        file1 >> a;
        file2 >> b;

        if (file1.eof()) { break; }

        iBit= iBit + 8;
        ber = hammingDistance(a, b) + ber;

    }


    cout << "Compare :" << File1 << " i " << File2 << endl;
    cout << "Bits: " << iBit << endl;
    cout << "Bit difference : " << ber << endl;


    ofstream logi;
    logi.open("logi.txt", ios_base::app);


    if (logi.good())
    {
        logi << "Compare:" << File1 << " and " << File2 << endl;
        logi << "Bits: " << iBit << endl;
        logi << "Bit difference: : " << ber << endl;
        logi.close();


    }
}

void makeRandom(const string nameFile, const int x, const char value1, const char value2)
{
    ofstream myFile(nameFile);
    int i = 0;

    for (i = 0; i < 90; i++) {
        myFile << value1;

    }
    for (i = 90; i < x; i++) {
        myFile << value2;

    }
}


int main(int argc, char * argv[]) {




cout << "Program liczacy BER" << endl;

                       makeFile("file1.bin", 100, 0x55);
                       makeFile("file2.bin", 100, 0x55);
                       Compare("file1.bin","file2.bin");

                       makeFile("file3.bin", 100, 0x55);
                       makeRandom("file4.bin", 100, 0x55, 0x45);
                       Compare("file3.bin","file4.bin");

                       makeFile("file5.bin", 1024 * 1024 * 400, 0x55);
                       makeFile("file6.bin", 1024 * 1024 * 400, 0x50);
                       Compare("file5.bin","file6.bin");

                       return 0;




}

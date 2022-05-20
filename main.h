#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#include <stdint.h>
#include <vector>
#include <bitset>
#include <ctime>
#include <iomanip>
#include <chrono>
#include <time.h>

using namespace std;
uint8_t hammingDistance(uint8_t n1, uint8_t n2);
void makeFile(const string nameFile, const int x, const char value);

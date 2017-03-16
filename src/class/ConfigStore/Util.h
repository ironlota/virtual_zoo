#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstring>
#include <unistd.h>
using namespace std;

void removeCharsFromString( string &str, char* charsToRemove );
vector<string> splits_(string& str, char delimiter);
void clearwait(int = 1);

#endif
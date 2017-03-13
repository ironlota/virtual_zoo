#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cstring>
using namespace std;

void removeCharsFromString( string &str, char* charsToRemove );
vector<string> splits_(string& str, char delimiter);

#endif
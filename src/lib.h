#pragma once
#include <vector>

using namespace std;

vector<char> readVector(char *str);
vector<char> getRPN(vector<char> inp);
float calc(vector<char> vec);
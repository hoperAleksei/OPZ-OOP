#include <iostream>
#include <vector>
#include "lib.h"

using namespace std;

int main() {
	vector<char> inpVec;
	vector<char> stack;
	char *inpStr = new char[500];
	
	cout << "Enter an expression: ";
	cin >> inpStr;
	
	try
	{
		inpVec = readVector(inpStr);
	}
	catch (logic_error & exception)
	{
		cout << exception.what() << endl;
		return 1;
	}
	
	stack = getRPN(inpVec);
	
	cout << "Reverse Polish Notation: ";
	for (int i = 0; i < stack.size(); ++i)
	{
		cout << stack[i] << ' ';
	}
	
	cout << endl << "Result: ";
	cout << calc(stack) << endl;
	
	return 0;
}
#include "lib.h"
#include <iostream>
#include <vector>

using namespace std;

bool isNum(char chr)
{
	if ((chr >= '0') && (chr <= '9'))
	{
		return true;
	}
	return false;
}

bool isOperation(char op)
{
	if ((op == '/') || (op == '*') || (op == '+')|| (op == '-') || (op == '(') || (op == ')'))
	{
		return true;
	}
	return false;
}

char getPriory(char a)
{
	if ((a == '/') || (a == '*'))
	{
		return 2;
	}
	else if (((int) a == '+') || ((int) a == '-'))
	{
		return 1;
	}
	else if ((a == '(') || (a == ')'))
	{
		return 0;
	}
}

bool cmpPriority(char a, char b)
{
	if ((getPriory(a)) >= (getPriory(b)))
	{
		return true;
	}
	return false;
}

vector<char> readVector(char *str)
{
	vector<char> vec;
	char ch;
	int i = 0;
	while (str[i] != '\0')
	{
		if ((isNum(str[i])) || (isOperation(str[i])))
		{
			vec.push_back(str[i]);
		}
		else
		{
			throw logic_error("ERROR: Invalid input data");
		}
		i += 1;
	}
	return vec;
}

vector<char> getRPN(vector<char> inp)
{
	vector<char> stack;
	vector<char> rpn;
	
	for (int i = 0; i < inp.size(); ++i)
	{
		if (isOperation(inp[i]))
		{
			if ((inp[i] != ')') && (!stack.empty()) && (cmpPriority(stack[stack.size() - 1], inp[i])))
			{
				if ((inp[i] != '('))
				{
					rpn.push_back(stack[stack.size() - 1]);
					stack.pop_back();
				}
				stack.push_back(inp[i]);
			}
			else if ((inp[i] != '(') && (inp[i] != ')'))
			{
				stack.push_back(inp[i]);
			}
			else if (inp[i] == '(')
			{
				stack.push_back(inp[i]);
			}
			else if (inp[i] == ')')
			{
				unsigned long j = stack.size() - 1;
				while (stack[j] != '(')
				{
					rpn.push_back(stack[j--]);
					stack.pop_back();
				}
				stack.pop_back();
			}
		}
		if (isNum(inp[i]))
		{
			rpn.push_back(inp[i]);
		}
	}
	
	int s = stack.size() - 1;
	while (s >= 0)
	{
		rpn.push_back(stack[s--]);
		stack.pop_back();
	}
	return rpn;
}

float calc(vector<char> vec)
{
	vector<float> stack;
	float result;
	
	for (int i = 0; i < vec.size(); ++i)
	{
		if (isNum(vec[i]))
			while (isNum(vec[i]))
			{
				stack.push_back(vec[i++] - '0');
			}
		if (vec[i] == '*')
		{
			result = stack[stack.size() - 1];
			stack.pop_back();
			result = (stack[stack.size() - 1] * result);
			stack.pop_back();
			stack.push_back(result);
		}
		else if (vec[i] == '/')
		{
			result = stack[stack.size() - 1];
			stack.pop_back();
			result = (stack[stack.size() - 1] / result);
			stack.pop_back();
			stack.push_back(result);
		}
		else if (vec[i] == '+')
		{
			result = stack[stack.size() - 1];
			stack.pop_back();
			result = (stack[stack.size() - 1] + result);
			stack.pop_back();
			stack.push_back(result);
		}
		else if (vec[i] == '-')
		{
			result = stack[stack.size() - 1];
			stack.pop_back();
			result = (stack[stack.size() - 1] - result);
			stack.pop_back();
			stack.push_back(result);
		}
	}
	
	return stack[stack.size() - 1];
}
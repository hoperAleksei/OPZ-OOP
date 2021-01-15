#include "lib.h"
#include <cstring>

#define ST_MAX 65535

int strlen(char *string)
{
	for (size_t i = 0; i < ST_MAX; ++i) {
		if (string[i] == '\0') return i;
	}
}

bool isCyrillic(char chr, bool &ind)
{
	if (chr == '\xD0')
	{
		ind = true;
		return true;
	}
	else if (chr == '\xD1')
	{
		ind = false;
		return true;
	}
	return false;
}

void getTrans(char ch, bool ind, char *&res)
{
	res = new char [4];
	res[0] = '\0';
	res[1] = '\0';
	res[2] = '\0';
	res[3] = '\0';
	
	if (ind)
	{
		if (ch == '\x90')
		{
			res[0] = 'A';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x91')
		{
			res[0] = 'B';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x92')
		{
			res[0] = 'V';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x93')
		{
			res[0] = 'G';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x94')
		{
			res[0] = 'D';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x95')
		{
			res[0] = 'E';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x96')
		{
			res[0] = 'Z';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x97')
		{
			res[0] = 'Z';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x98')
		{
			res[0] = 'I';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x99')
		{
			res[0] = 'J';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9A')
		{
			res[0] = 'K';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9B')
		{
			res[0] = 'L';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9C')
		{
			res[0] = 'M';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9D')
		{
			res[0] = 'N';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9E')
		{
			res[0] = 'O';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x9F')
		{
			res[0] = 'P';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA0')
		{
			res[0] = 'R';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA1')
		{
			res[0] = 'S';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA2')
		{
			res[0] = 'T';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA3')
		{
			res[0] = 'U';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA4')
		{
			res[0] = 'F';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA5')
		{
			res[0] = 'H';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA6')
		{
			res[0] = 'T';
			res[1] = 's';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA7')
		{
			res[0] = 'C';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA8')
		{
			res[0] = 'S';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xA9')
		{
			res[0] = 'S';
			res[1] = 'c';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAA')
		{
			res[0] = '\0';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAB')
		{
			res[0] = 'I';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAC')
		{
			res[0] = '\0';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAD')
		{
			res[0] = 'E';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAE')
		{
			res[0] = 'Y';
			res[1] = 'u';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xAF')
		{
			res[0] = 'Y';
			res[1] = 'a';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x81')
		{
			res[0] = 'Y';
			res[1] = 'o';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB0')
		{
			res[0] = 'a';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB1')
		{
			res[0] = 'b';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB2')
		{
			res[0] = 'v';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB3')
		{
			res[0] = 'g';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB4')
		{
			res[0] = 'd';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB5')
		{
			res[0] = 'e';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB6')
		{
			res[0] = 'z';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB7')
		{
			res[0] = 'z';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB8')
		{
			res[0] = 'i';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xB9')
		{
			res[0] = 'j';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBA')
		{
			res[0] = 'k';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBB')
		{
			res[0] = 'l';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBC')
		{
			res[0] = 'm';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBD')
		{
			res[0] = 'n';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBE')
		{
			res[0] = 'o';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\xBF') {
			res[0] = 'p';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		
	}
	else
	{
		if (ch == '\x80')
		{
			res[0] = 'r';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x81')
		{
			res[0] = 's';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x82')
		{
			res[0] = 't';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x83')
		{
			res[0] = 'u';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x84')
		{
			res[0] = 'f';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x85')
		{
			res[0] = 'h';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x86')
		{
			res[0] = 't';
			res[1] = 's';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x87')
		{
			res[0] = 'c';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x88')
		{
			res[0] = 's';
			res[1] = 'h';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x89')
		{
			res[0] = 's';
			res[1] = 'c';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8A')
		{
			res[0] = '\0';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8B')
		{
			res[0] = 'i';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8C')
		{
			res[0] = '\0';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8D')
		{
			res[0] = 'e';
			res[1] = '\0';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8E')
		{
			res[0] = 'y';
			res[1] = 'u';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x8F')
		{
			res[0] = 'y';
			res[1] = 'a';
			res[2] = '\0';
			res[3] = '\0';
		}
		else if (ch == '\x91')
		{
			res[0] = 'y';
			res[1] = 'o';
			res[2] = '\0';
			res[3] = '\0';
		}
	}
}

void strAdd(char *str1, char *str2)
{
	size_t i = 0;
	size_t j = 0;
	
	size_t len = strlen(str1)+strlen(str2)+1;
	char *res = new char [len];
	
	while ((i < ST_MAX) && (str1[i] != '\0'))
	{
		res[i] = str1[i];
		++i;
	}
	if (str1[i] == '\0')
	{
		while ((j < ST_MAX) && (i < ST_MAX) && (str2[j] != '\0'))
		{
			res[i] = str2[j];
			i++;
			j++;
		}
		res[i] = '\0';
	}
	strcpy(str1, res);
	
	delete [] res;
}

char* translit(char *inp, size_t length)
{
	char *res = new char [length*3+1];
	char cur[2];
	cur[1] = '\0';
	res[0] = '\0';
	char *curr = "";
	size_t i;
	bool ind;
	for (i = 0; i < length; ++i)
	{
		if (isCyrillic(inp[i], ind))
		{
			++i;
			getTrans(inp[i], ind, curr);
			strAdd(res, curr);
		}
		else
		{
			cur[0] = inp[i];
			strAdd(res, cur);
		}
	}
	return res;
}

#pragma once
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

string scanString(string str1 = "")
{
	std::cin >> str1;
	return str1;
}

#ifdef DEBUG
	string scanString(string str1)
	{
		std::cin >> str1;
		return str1;
	}
#endif // DEBUG

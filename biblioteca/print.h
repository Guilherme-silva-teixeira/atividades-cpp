#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include <stdio.h>

using namespace std;

void print(string str1 = "")
{
	std::cout << str1 << std::endl;
}

#ifdef DEBUG == true
void print(string str1 = "")
{
	std::cout << str1 << std::endl;
}
#endif // DEBUG
//adicionar o cursor de todos os tipos de variáveis
//int, char, etc

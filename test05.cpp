//função
#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

void texto(void)
{
	std::cout << "Texto é uma string" << std::endl;
}

int soma(int a, int b)
{
	return (a + b);
}

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	string transportes[3] = {"carro","avião","navio"};
	int treze = soma(6, 7);
	texto();
	std::cout << "A soma de 6 mais 7 é de: " << treze << std::endl;
	return null;
}

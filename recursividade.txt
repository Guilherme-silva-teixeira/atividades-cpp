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

void funcaoComPrototipo();

int recursividade(int num);

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	string transportes[3] = {"carro","avião","navio"};
	int treze = soma(6, 7);
	texto();
	funcaoComPrototipo();
	int n;
	std::cin >> n;
	std::cout << "Recursividade: " << recursividade(n) << '.' << std::endl;
	std::cout << "A soma de 6 mais 7 é de: " << treze << std::endl;
	return null;
}

void funcaoComPrototipo()
{
	std::cout << "Texto" << std::endl;
}

int recursividade(int num)
{
	int x;
	for (int i = 0; i < num; i--)
	{
		x = (num*(num - 1));
		recursividade(num);
	}
	return x;
}

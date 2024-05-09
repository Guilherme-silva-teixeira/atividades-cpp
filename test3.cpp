// esse arquivo trabalha com o teste de array e algumas funções

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int matrix[3][4];
	int l, c;
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 4; c++)
		{
			std::cin >> matrix[l][c];
		}
	}
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			std::cout << matrix[l][c] << " " << std::endl;
		}
		std::cout << "\n" << std::endl;
	}
	return 0;
}

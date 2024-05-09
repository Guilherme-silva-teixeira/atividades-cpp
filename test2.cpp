// esse arquivo trabalha com o teste de array e algumas funções

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c = 0;
	int l = 0;
	int n = 1;
	int ln, cn;
	int matrix[3][3];
	for (c; c < 3; c++)
	{
		for (l; l < 3; l++)
		{
			matrix[c][l] = n;
			n++;
		}
	}
	std::cout << "Valores de array aramzenados com sucesso\n" << std::endl;
	std::cout << "Digite a linha de um array (máximo 3)" << std::endl;
	std::cin >> ln;
	std::cout << "Agora digite o número da coluna do array" << std::endl;
	std::cin >> cn;
	std::cout << "O valor do array pesquisado é de: " << matrix[cn][ln] << "." << std::endl;
	return 0;
}

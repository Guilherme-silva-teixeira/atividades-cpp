// esse arquivo trabalha com o teste de array e algumas funções

#include <iostream>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int n = 0;
	int array[5];
	for (int i = 0; i < sizeof(array)/4; i++)
	{
		std::cout << "insira o valor do array " << i << std::endl;
		std::cin >> array[i];
		n++;
	}
	for (int j = 0; j < n; j++)
	{
		std::cout << "Valor do array " << j << "é de: " << array[j] << "\n";
	}
	return 0;
}

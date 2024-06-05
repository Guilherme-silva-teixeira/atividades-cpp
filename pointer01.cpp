#include <iostream>
#include <locale>
#include <string>

using namespace std;

void mostrar()
{
	int* pn;//sem endereço
	int num = 0;//variável
	pn = &num;//endereço começa em 1000, pega o endereço da variável
	std::cout << pn << std::endl;//imprime o endereço na memória
}

int main(int null)
{
	mostrar();
	return null;
}

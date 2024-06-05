#include <iostream>
#include <locale>
#include <string>

using namespace std;

void mostrar()
{
	int* pn;
	int num = 0;
	pn = &num;//endereço começa em 1000
	std::cout << pn << std::endl;//imprime o endereço na memória
}

int main(int null)
{
	mostrar();
	return null;
}

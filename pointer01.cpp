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
	setlocale(LC_ALL, "portuguese");
	string variavel = "variável do tipo String";
	string* pv;
	pv = &variavel;
	std::cout << variavel << std::endl;
	std::cout << "Sua alocação de memória é de: " << pv << std::endl;
	*pv = "String trocada";
	std::cout << "\n\n" << variavel << " \n" << *pv;
	mostrar();
	return null;
}

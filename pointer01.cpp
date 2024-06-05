#include <iostream>
#include <locale>
#include <string>

using namespace std;

void aula37()
{
	int* p;
	int vetor[10];
	p = &vetor[0];
	//dar elementos a variável
	for (int i = 0; i < 10; i++)
	{
		vetor[i] = i;
	}
	//mostrar o valor dos vetores
	for (int i = 0; i < 10; i++)
	{
		std::cout << vetor[i] << std::endl;
	}
	//mostrar a posição do vetor
	for (int i = 0; i < 10; i++)
	{
		std::cout << *p;
	}
	std::cout << "Endereço de memória: " << p << std::endl;
}

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
	std::cout << "\n\n" << variavel << " \n" << *pv<< std::endl;
	aula37();
	mostrar();
	return null;
}

#include <iostream>
#include <locale>
#include <string>

using namespace std;

void aula37()
{
	int* p;
	int vetor[10];
	p = &vetor[0];
	for (int i = 0; i < 10; i++)
	{
		vetor[i] = i;
		std::cout << "\nVetor: " << vetor[i] << std::endl;
		p = &vetor[i];
		std::cout << "\nSua alocação: " << p << std::endl;
		//adicionar um valor ao array
		//mostrar o valor]
		//alocar seu endereço ao ponteiro
		//mostrar a alocação
		//armazenar e fazer tudo denovo
	}
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

#include <iostream>
#include <locale>
#include <string>
#include <list>

using namespace std;

struct Produtos
{
	int changeArray(int tot)
	{
		if (tot == 0)
		{
			tot == 1;
		}
		return tot;
	}

	int tot = changeArray(1);

	string nome[100];
	string tipo[100];
	int id[100];
	int estq[100];
};

void op()
{
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite a opção necessária: \n\n 1 - Cadastrar produto\n\n 2 - mostrar produtos\n\n 3 - Pesquisar e editar o produto" << std::endl;
	std::cout << "opção: " << std::endl;
}

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	op();
	return null;
}

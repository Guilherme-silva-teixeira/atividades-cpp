#include <iostream>
#include <locale>
#include <stdlib.h>
#include <queue>
#include <stack>

using namespace std;

string strcmpq(string str1, string str2);

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	queue <string> produtos;
	int counter = 0, stop = 0;
	string blocker = "null", sair = "sair";
	int op;
	string nome, id, preco, tipo;
	int stq;
	do
	{
		std::cout << "Digite a opção: " << std::endl;
		std::cin >> blocker;
		std::cout << "\n1 - Cadastrar produto\n2 - Procuerar produto\n3 - Pesquisar e editar o produto" << std::endl;
		system("pause");
		std::cin >> op;
		switch (op)
		{
			case 1:
				std::cout << "Digite o nome do produto: " << std::endl;
				std::cin >> nome;
				std::cout << "Digite o id do produto:" << std::endl;
				std::cin >> id;
			break;
		}
	} while (!(strcmpq(blocker, sair) == "true" || blocker == "SAIR"));
	return null;
}

string strcmpq(string str1, string str2)
{
	if (str1 == str2)
	{
		return "true";
	}
	return "false";
}

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
				system("cls");
				std::cout << "Digite o nome do produto: " << std::endl;
				std::cin >> nome;
				std::cout << "\n\n\n\n\n\n\n###                        5% Concluido;" << std::endl;
				system("pause");
				system("cls");
				std::cout << "Digite o id do produto:" << std::endl;
				std::cin >> id;
				std::cout << "\n\n\n\n\n\n\n######                    25% Concluido;" << std::endl;
				system("pause");
				system("cls");
				std::cout << "Digite o preço do produto: " << std::endl;
				std::cin >> preco;
				std::cout << "\n\n\n\n\n\n\n#########                 50% Concluido;" << std::endl;
				system("pause");
				system("cls");
				std::cout << "Digite o tipo do produto: " << std::endl;
				std::cin >> tipo;
				std::cout << "\n\n\n\n\n\n\n############              75% Concluido;" << std::endl;
				system("pause");
				system("cls");
				std::cout << "Digite o estoque do produto: " << std::endl;
				std::cin >> stq;
				std::cout << "\n\n\n\n\n\n\n###############          100% Concluido;" << std::endl;
				system("pause");
				system("cls");
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

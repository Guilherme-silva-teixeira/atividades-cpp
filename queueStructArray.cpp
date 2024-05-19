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
	int op, one = 1;
	string nome, id, preco, tipo;
	string  arrNome[17], arrID[17], arrPreco[17], arrTipo[17];
	int stq, arrSTQ[17];
	int qtd = 1;
	string nArrNome, nArrID, nArrPreco, nArrTipo;
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
				if (true)
				{
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
				qtd++;
				nome = arrNome[qtd];
				preco = arrPreco[qtd];
				tipo = arrTipo[qtd];
				id = arrID[qtd];
				stq = arrSTQ[qtd];
			}
			break;
			case 2:
					{
						if (true)
						{
							std::cout << "Pesquisa: " << std::endl;
							system("cls");
							std::cout << "Digite o nome do produto: " << std::endl;
							std::cin >> nArrNome;
							std::cout << "\n\n\n\n\n\n\n###                        5% Concluido;" << std::endl;
							system("pause");
							system("cls");
							std::cout << "Digite o id do produto:" << std::endl;
							std::cin >> nArrID;
							std::cout << "\n\n\n\n\n\n\n######                    25% Concluido;" << std::endl;
							system("pause");
							system("cls");
							std::cout << "Digite o preço do produto: " << std::endl;
							std::cin >> nArrPreco;
							std::cout << "\n\n\n\n\n\n\n#########                 50% Concluido;" << std::endl;
							system("pause");
							system("cls");
							std::cout << "Digite o tipo do produto: " << std::endl;
							std::cin >> nArrTipo;
							std::cout << "\n\n\n\n\n\n\n############              75% Concluido;" << std::endl;
							system("pause");
							system("cls");
							std::cout << "Digite o estoque do produto: " << std::endl;
							std::cin >> stq;
							std::cout << "\n\n\n\n\n\n\n###############          100% Concluido;" << std::endl;
							system("pause");
							system("cls");
							for (int i = 0; i < qtd; i++)
							{
								if (strcmpq(nome, nArrNome) == "true")
								{
									std::cout << "Estoque do produto: " << arrSTQ[qtd] << ".\n" << std::endl;
									std::cout << "=============================================" << std::endl;
								}
							}
						}
					}
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

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

	string nome;
	string tipo;
	int id;
	int estq;
};

int op()
{
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite a opção necessária: \n\n 1 - Cadastrar produto\n\n 2 - mostrar produtos\n\n 3 - Pesquisar e editar o produto" << std::endl;
	std::cout << "opção: " << std::endl;
	int op;
	std::cin >> op;
	return op;
}

void mostrarProdutos()
{
	struct Produtos lista;
	string n = lista.nome;
	string t = lista.tipo;
	int i = lista.id;
	int e = lista.estq;
	std::cout << "\nProduto: " << std::endl;
}

void CadastrarProduto()
{
	struct Produtos lista;
	string nome1 = lista.nome;
	string tip1 = lista.tipo;
	int id1 = lista.id;
	int estq1 = lista.estq;
	setlocale(LC_ALL, "portuguese");
	std::cout << "Digite o nome do produto:" << std::endl;
	std::cin >> nome1;
	std::cout << "Digite o tipo do produto:" << std::endl;
	std::cin >> tip1;
	std::cout << "Digite o tipo do produto:" << std::endl;
	std::cin >> tip1;
	std::cout << "Digite o ID do produto:" << std::endl;
	std::cin >> id1;
	std::cout << "Digite o estoque do produto:" << std::endl;
	std::cin >> estq1;
	std::cout << "Processo finalizado!" << std::endl;
}

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	int opt = op();
	switch (opt)
	{
	case 1:
		{
			CadastrarProduto();
		}
	default:
		break;
	}

	return null;
}

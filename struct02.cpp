#include <iostream>
#include <locale>

using namespace std;

struct carro
{
//adicionar função a struct
//utiliza-se setlocale nas funções que imprimem algo
	string nome;
	string cor;
	int pot;
	int velMax;

	void insere(string strnome, string strcor, int strpot, int strvelMax)
	{
		nome = strnome;
		cor = strcor;
		pot = strpot;
		velMax = strvelMax;
	}

	void mostra()
	{
		setlocale(LC_ALL, "portuguese");
		std::cout << "Nome---------------------:" << nome << "\n\n" << std::endl;
		std::cout << "Cor----------------------:" << cor << "\n\n" << std::endl;
		std::cout << "Potência-----------------:" << pot << "\n\n" << std::endl;
		std::cout << "Velocidade Maxima--------:" << velMax << "\n\n" << std::endl;

		std::cout << "Nome---------------------:" << nome << "\n\n" << std::endl;
		std::cout << "Cor----------------------:" << cor << "\n\n" << std::endl;
		std::cout << "Potência-----------------:" << pot << "\n\n" << std::endl;
		std::cout << "Velocidade Maxima--------:" << velMax << "\n\n" << std::endl;
	}
};

int main(int null)//remover null se apresentar erro;
{
	setlocale(LC_ALL, "portuguese");
	carro car1;
	carro car2;

	car1.nome = "Tornado";
	car1.cor = "Vermelho";
	car1.pot = 450;
	car1.velMax = 350;

	car2.nome = "Luxo";
	car2.cor = "Preto";
	car2.pot = 250;
	car2.velMax = 260;

	return null;
}

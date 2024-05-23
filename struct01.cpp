#include <iostream>
#include <locale>

using namespace std;

struct carro
{
	string nome;
	string cor;
	int pot;
	int velMax;
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

	std::cout << "Nome---------------------:" << car1.nome << "\n\n" << std::endl;
	std::cout << "Cor----------------------:" << car1.cor << "\n\n" << std::endl;
	std::cout << "Potência-----------------:" << car1.pot << "\n\n" << std::endl;
	std::cout << "Velocidade Maxima--------:" << car1.velMax << "\n\n" << std::endl;

	std::cout << "Nome---------------------:" << car2.nome << "\n\n" << std::endl;
	std::cout << "Cor----------------------:" << car2.cor << "\n\n" << std::endl;
	std::cout << "Potência-----------------:" << car2.pot << "\n\n" << std::endl;
	std::cout << "Velocidade Maxima--------:" << car2.velMax << "\n\n" << std::endl;

	return null;
}

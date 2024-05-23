#include <iostream>
#include <locale>

using namespace std;

struct carro
{
	string nome;
	string cor;
	int pot;
	int velMax;
	int vel;

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
	}

	void alterarVelocidade(int mv)
	{
		vel = mv;
		if (vel > velMax)
		{
			vel = velMax;
		}
	}
};

int main(int null)//remover null se apresentar erro;
{
	setlocale(LC_ALL, "portuguese");
	carro car1, car2, car3, car4;
	car1.insere("Tornado", "Vermelho", 450, 360);
	car1.mostra();
	car1.alterarVelocidade(400);//se a velocidade for maior ele vai substituir para a ultima várialvel adicionada
	car1.mostra();
	
	return null;
}

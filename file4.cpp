#include <iostream>
#include <stdlib.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;
	chances = 6;
	tam = 0;
	acerto = false;
	acertos = 0;
	std::cout << "Fale para o seu amigo fechar os olhos e digite a palavra secreta: " << std::endl;
	std::cin >> palavra;
	system("cls");
	while (palavra[i] != '\0')
	{
		i++;
		tam++;
	}
	for (i = 0; i < 30; i++)
	{
		secreta[i] = '-';
	}
	while ()
	{

	}
	
	return 0;
}

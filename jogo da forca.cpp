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
	i = 0;
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
	while ((chances > 0)&&(acertos < tam))
	{
		std::cout << "Chances restantes: " << chances << "\n\n" << std::endl;
		std::cout << "Palavra secreta: " << std::endl;
		for (i = 0; i < tam; i++)
		{
			std::cout << secreta[i] << std::endl;
		}
		std::cout << "\n\nDigite uma letra: " << std::endl;
		std::cin >> letra[0];
		for (i = 0; i < tam; i++)
		{
			if (palavra[i] == letra[0])
			{
				acerto = true;
				secreta[i] = palavra[i];
				acertos++;
			}
		}
		if (!acerto)
		{
			chances--;
		}
		acerto = false;
		system("cls");
	}
	if (acertos == tam)
	{
		std::cout << "Parabéns, você venceu" << std::endl;
	}
	else
	{
		std::cout << "Que pena, você perdeu" << std::endl;
	}
	system("pause");

	return 0;
}

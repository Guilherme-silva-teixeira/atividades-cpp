#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <locale>
#include <stdlib.h>
#include <string>

using namespace std;

void PRINTBOARD(char arr[2][2])
{
	std::cout << '|' << ' ' << arr[0][0] << '|' << ' ' << arr[0][1] << '|' << ' ' << arr[0][2] << '|' << std::endl;
	std::cout << '|' << ' ' << arr[1][0] << '|' << ' ' << arr[1][1] << '|' << ' ' << arr[1][2] << '|' << std::endl;
	std::cout << '|' << ' ' << arr[2][0] << '|' << ' ' << arr[2][1] << '|' << ' ' << arr[2][2] << '|' << std::endl;
}

bool verifyWinner(char player1, char player2)
{
}

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	char arr[2][2];
	char playerX = 'X';
	char playerY = 'O';
	int x = 0, y = 0;
	char atualplayer = playerX;
	bool isGameWin = false;
	while (!isGameWin)
	{
		std::cout << "Digite a coordenada x:" << std::endl;
		std::cin >> x;
		std::cout << "Digite a coordenada y:" << std::endl;
		std::cin >> y;
		arr[x][y] = atualplayer;
		PRINTBOARD(arr);
		system("pause");
		system("cls");
		if (atualplayer == playerX)
		{
			atualplayer = playerY;
		}
		else
		{

			atualplayer = playerX;
		}
		if (verifyWinner() == true)
		{

		}
	}
	return null;
}

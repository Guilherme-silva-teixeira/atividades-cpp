#include <iostream>
#include <locale>

using namespace std;

int main(int null)
{
	enum armas {fuzil = 100, revolver = 15, rifle = 3, escopeta = 1};//adiciona mais 1 se não houver valor
	int num;
	armas armaSelecionada;
	armaSelecionada = escopeta;
	std::cout << armaSelecionada << std::endl;//imprime o valor

	return null;
}

#include <iostream>
#include <locale>

using namespace std;

struct MyStruct
{
	string nome;
	string cor;
	int pot;
	int valMax;
};

int main(int null)//remover null se apresentar erro;
{
	setlocale(LC_ALL, "portuguese");
	MyStruct estrutura;
	std::cin >> estrutura.nome;
	std::cout << estrutura.nome << std::endl;
	return null;
}

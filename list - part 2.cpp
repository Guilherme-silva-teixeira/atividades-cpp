#include <iostream>
#include <stdlib.h>
#include <locale>
#include <list>

using namespace std;

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	list <int> aula;
	int tam;
	list <int>::iterator it;
	tam = 10;

	for (int i = 0; i < tam; i++)
	{
		aula.push_front(i);
	}

	it = aula.begin();
	advance(it, 3);
	aula.insert(it, 0);
	aula.erase(--it);

	std::cout << "Tamanho da lista: " << aula.size() << "\n\n" << std::endl;

	tam = aula.size();
	for (int i = 0; i < tam; i++)
	{
		std::cout << aula.front() << "\n" << std::endl;
		aula.pop_front();
	}

	std::cout << "\ntamanho da lista: " << aula.size() << "\n" << std::endl;
	return null;
}

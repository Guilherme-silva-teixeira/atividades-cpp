#include <iostream>
#include <locale>
#include <list>

using namespace std;

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	list <int> aula;
	int size;
	size = 10;
	for (int i = 0; i < 10; i++)
	{
		aula.push_front(i);
	}
	std::cout << "Tamanho da lista: " << aula.size() << "\n" << std::endl;
	size = aula.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << aula.front() << "\n" << std::endl;
		aula.pop_front();
	}
	return null;
}

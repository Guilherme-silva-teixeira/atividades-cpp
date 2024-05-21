#include <iostream>
#include <locale>
#include <list>

using namespace std;

int main(int null)
{
	setlocale(LC_ALL, "portuguese");
	list <int> aula;
	int size;
	list <int>::iterator it;
	size = 10;
	for (int i = 0; i < 10; i++)
	{
		aula.push_front(i);
	}
	aula.sort();
	//
	it = aula.begin();
	advance(it, 5);
	aula.insert(it, 0);
	std::cout << "Tamanho da lista: " << aula.size() << "\n" << std::endl;
	size = aula.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << aula.front() << "\n" << std::endl;
		aula.pop_front();
	}
	return null;
}

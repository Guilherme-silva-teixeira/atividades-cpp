//Fibonacci e fatorial
#include <iostream>
#include <locale>

using namespace std;

void contador(int counter, int n);
int fatorial(int n);

int main(int null)
{
	int val;
	int res;
	val = 8;
	res = fatorial(val);
	std::cout << "Fatorial de " << val << ": " << res << std::endl;
	std::cout << "Fibonacci com " << val << " valores: " << std::endl;
	for (int i = 0; i < val; i++)
	{
	}
	return null;
}

void contador(int counter , int n  = 0)
{
	std::cout << n << std::endl;
	if (n > counter)
	{
		contador(counter, ++n);
	}
}

int fatorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return (n * fatorial(n - 1));
}

////////////////////////////////////////////////////////////////
//Fibonacci e fatorial                                        //
//file7.cpp                                                   //
////////////////////////////////////////////////////////////////
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
		std::cout << Fibonacci(i + 1) << " " << std::endl;
	}
	std::cout << "\n\n" << std::endl;
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

int Fibonacci(int n)
{
	if ((n == 1) || (n == 2))
	{
		return 1;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

#include <iostream>
#include <locale>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
	if (argc > 1)
	{
		if (!strcmp(argv[1], "sol"))
		{
			std::cout << "vou ao clube" << std::endl;
		}
		else if (!strcmp(argv[1], "nublado"))
		{
			std::cout << "vou ao cinema" << std::endl;
		}
		else
		{
			std::cout << "vou ficar em casa" << std::endl;
		}
	}
	system("pause");
	return 0;
}

#include "print.h"
#include <iostream>
#include <locale>
#include "scan.h"

using namespace std;

int main(int null)
{
	print("is working");
	string str;
	string str2 = scanString(str);
	print(str2);
	return null;
}

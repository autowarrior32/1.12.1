#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

int main(int argc, char** argv)
{
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::string str1{};
	std::ifstream fin("utf8_in.txt");
	
	if (fin.is_open() == false)
	{
		return(1);
	}

	while (fin >> str1)
	{
		std::cout << str1 << std::endl;
	}

	return(0);
}


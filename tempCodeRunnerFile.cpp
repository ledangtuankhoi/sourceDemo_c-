#include <iostream>
#include <fstream>

int main()
{
	std::ifstream fileInput("./my_document.txt");

	if (fileInput.fail())
	{
		std::cout << "Failed to open this file!" << std::endl;
		return -1;
	}
	while (!fileInput.eof())
	{
		int n;
		fileInput >> n;
		std::cout << n << " ";
	}
	std::cout << std::endl;

	fileInput.close();

	return 0;
}
#include "main.hpp"

int main()
{
	Vector_with_binary_search vector(10);

	std::cout << vector << "\n\n\n";

	int item;

	std::cin >> item;

	if (vector.binarySearch(item))
	{
		std::cout << std::endl << "true\n\n";
	}
	else
	{
		std::cout << std::endl << "false\n\n";
	}

	std::cout << vector << std::endl;
}

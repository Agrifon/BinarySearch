#include "vector_with_binary_search.hpp"

Vector_with_binary_search::Vector_with_binary_search(int size)
{
	for (int i = 0; i < size; ++i)
	{
		m_vector.push_back(rand() %100 + 1);
	}
}

std::ostream& operator<< (std::ostream& out, const Vector_with_binary_search& vector)
{
	for (auto const &element : vector.m_vector)
	{
		std::cout << element << " " ;
	}

	return out;
}
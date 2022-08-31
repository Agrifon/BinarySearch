#include "vector_with_binary_search.hpp"

Vector_with_binary_search::Vector_with_binary_search(int size)
{
	for (int i = 0; i < size; ++i)
	{
		m_vector.push_back(rand() %1000 + 1);
	}
}

void Vector_with_binary_search::sortingVector()
{
	std::sort(m_vector.begin(), m_vector.end());
}

bool Vector_with_binary_search::binarySearch(int item)
{
	sortingVector();

	if (item > m_vector.back())
	{
		return false;
	}

	int low = 0;
	int hight = m_vector.size();
	
	while (low <= hight)
	{
		int mid = (hight + low) / 2;

		if (m_vector.at(mid) == item)
		{
			return true;
		}
		
		if (m_vector.at(mid) > item)
		{
			hight = mid - 1;
		}

		if (m_vector.at(mid) < item)
		{
			low = mid + 1;
		}

	}
	
	return false;
}

std::ostream& operator<< (std::ostream& out, const Vector_with_binary_search& vector)
{
	for (auto const &element : vector.m_vector)
	{
		std::cout << element << " " ;
	}

	return out;
}
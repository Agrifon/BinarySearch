#pragma once

#include<iostream>
#include<vector>

class Vector_with_binary_search				//		O(log n)
{
private:
	std::vector<int> m_vector;

	void sortingVector();

public:
	Vector_with_binary_search(int size);
	~Vector_with_binary_search() = default;

	int binarySearch();

	friend std::ostream& operator<< (std::ostream& out, const Vector_with_binary_search& vector);
};
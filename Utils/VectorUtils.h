#pragma once

#include <vector>

using namespace std;

namespace vec
{
	// Get the tail of a vector
	// [1, 2, 3] -> [2, 3]
	template <typename T>
	vector<T> tail(const vector<T> &vec)
	{
		if (vec.size() <= 1) return vector<T>(0);

		auto tail = vec;
		pop_front(tail);

		return tail;
	}

	// Erases the first element in the list
	// Returns true if popped, false if vector is empty
	template <typename T>
	bool pop_front(vector<T> &vec)
	{
		if (vec.empty()) return false;
		
		vec.erase(vec.begin());
		return true;
	}
}


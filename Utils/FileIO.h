#pragma once

#include <string>
#include <vector>
#include <fstream>

using namespace std;

namespace fio
{
	// Read contents of a file and return a string vector
	vector<string> fileToVec(const string path)
	{
		vector<string> result;

		ifstream file;
		string line;

		file.open(path);
		while (getline(file, line))
			result.push_back(line);

		file.close();

		return result;
	}

	// Write vector to file
	void vecToFile(const string filename, const vector<string> &vec)
	{
		ofstream file;
		file.open(filename);

		file << vec.front();
		for (auto it = vec.begin() +1; it != vec.end(); it++)
			file << endl << *it;

		file.close();
	}
}

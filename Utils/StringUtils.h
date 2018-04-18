#pragma once

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

namespace str
{
	// Turns a string into a vector of strings split by the delim
	// split("Split-This-String", "-") -> ["Split" "This" "String"]
	vector<string> split(string str, const string &delim)
	{
		vector<string> result;
	
		size_t pos(0);
		while ((pos = s.find(delim)) != string::npos) {
			const auto token = s.substr(0, pos);
			result.push_back(token);
			s.erase(0, pos + delim.length());
		}
		result.push_back(s);
	
		return result;
	}

	// Fills a string with c until desired length is reached. Option to fill at front or back
	// fillStr("Make Me Longer", " ", 20) -> "Make Me Longer      "
	string fill(string str, const char c, const int length,  bool fillBack = true)
	{
		while (str.length() < length)
		{
			if (fillBack) str += c;
			else str = c + str;
		}

		return str;
	}

	// Returns the string in UPPERCASE
	string toupper(string str)
	{
		transform(str.begin(), str.end(), str.begin(), ::toupper);
	}
}


#include "LoadingBar.h"
#include <iostream>
#include <string>
#include <sstream>

LoadingBar::~LoadingBar()
{
	// Nothing to destroy
}

string LoadingBar::toString()
{
	stringstream ss;

	const auto progressed = calcProgress();

	if (_lastProgress != progressed)

	// Construct message
	ss << _cLeft;
	for (size_t i = 0; i < progressed; i++)
		ss << _cProgress;
	for (size_t i = 0; i < _size - progressed; i++)
		ss << _cEmpty;
	ss << _cRight;

	return ss.str();
}

void LoadingBar::print()
{
	if (_lastProgress != calcProgress())
		cout << this->toString() << '\r' << flush;
}

int LoadingBar::calcProgress()
{
	return round(double(_size * _progress) / double(_max));
}

ostream& operator<<(ostream &os, LoadingBar &lb)
{
	os << lb.toString().c_str();
	return os;
}

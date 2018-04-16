// Some examples of code and tests.
//

#include "stdafx.h"
#include "LoadingBar/LoadingBar.h"
#include <iostream>
#include <string>
#include <Windows.h>


using namespace std;

int main()
{
	LoadingBar* lb = new LoadingBar(10, 0, 1000);

	for (size_t i = 0; i <= 1000; i++)
	{
		lb->print();
		lb->iterate();
	}
	cout << lb->toString() << endl;


	system("pause");
    return 0;
}


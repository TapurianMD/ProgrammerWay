/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#include <iostream>
#include <string>
#include "ProgrammerWay.h"

using namespace std;

int main(int argc, char * argv[])
{
	cout << "ProgrammerWay" << endl;

	int i = 0;

	Show *myShow = new Show();

	while (i != 6)
	{
		myShow->Menu();

		cin >> i;

		cout << endl;

		myShow->Item(i);
	}

	return 0;
}


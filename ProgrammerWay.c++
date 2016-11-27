/* Copyright © 2016, Xerxes Langerudi. All rights reserved */

#ifndef __Programmer_CPP__
#define __Programmer_CPP__

#include <iostream>
#include <string>
#include "ProgrammerWay.h"

using namespace std;

void Show::PrintArray(short size, string items[])
{
	const string preElement = "\t";
	const string postElement = "\n";

	string all;

	short i;

	for (i = 0; i < size; i++)
	{
		all += items[i] + "\n";
	}

	cout << all;
}

void Show::Menu()
{
	string menu[] = {"1. Study", "2. Exercise", "3. Food", "4. Hygeine", "5. Spouse", "6. Exit", "Please type the number of one of the options:"};

	PrintArray(7, menu);
}

void Show::Item(int optionNumber)
{
	string study[] = {"Algorithms", "Concurrency", "Usability", "UI", "Compression", "Networking", "C Programming"};
	string exercise[] = {"Walking", "Bicycling"};
	string food[] = {"Water", "Cocoa Milk", "Joghurt", "Coffee", "Pasta", "Fish", "Banana", "Apples", "Pistacious", "Walnuts", "Almond", "Watermelon", "Sunflower seeds"};
	string hygeine[] = {"Morning shower", "Tooth brushing", "Laundry"};
	string spouse[] = {"(Further advances in the sciences is awaited to answer this)"};

	short i;

	switch (optionNumber)
	{
		case 1:
			PrintArray(7, study);

			break;
		
		case 2:
			PrintArray(2, exercise);

			break;
		
		case 3:
			PrintArray(13, food);

			break;
		
		case 4:
			PrintArray(3, hygeine);

			break;
		
		case 5:
			PrintArray(1, spouse);

			break;
		
	}

	cout << endl;
}

#endif


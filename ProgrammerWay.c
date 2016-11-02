/* Copyright © 2016, ProgrammerWay. All rights reserved */

#include <stdio.h>

void showMenu(void);
void showItem(int);

int main(int argc, char * argv[])
{
	printf("ProgrammerWay\n");

	int i = 0;

	while (i != 6)
	{
		showMenu();

		scanf("%i", &i);

		printf("\n");

		showItem(i);
	}

	return 0;
}

void showMenu()
{
	printf("1. Study\n");
	printf("2. Exercise\n");
	printf("3. Food\n");
	printf("4. Hygeine\n");
	printf("5. Spouse\n");
	printf("6. Exit\n");

	printf("Please type the number of one of the options:");
}

void iterator(int itemNumber, char items[][100])
{
	int i;

	for(i = 0; i < itemNumber; i++)
	{
		printf("\t%s\n", items[i]);
	}
}

void showItem(int optionNumber)
{
	char study[][100] = {"Algorithms", "Concurrency", "Usability", "UI", "Compression", "Networking", "C Programming"};
	char exercise[][100] = {"Walking", "Bicycling"};
	char food[][100] = {"Water", "Cocoa Milk", "Joghurt", "Coffee", "Pasta", "Fish", "Banana", "Apples", "Pistacious", "Walnuts", "Almond", "Watermelon", "Sunflower seeds"};
	char hygeine[][100] = {"Morning shower", "Tooth brushing", "Laundry"};
	char spouse[][100] = {"(Further advances in the sciences is awaited to answer this)"};

	int i;

	switch (optionNumber)
	{
		case 1:
		{
			iterator(7, study);

			break;
		}
		case 2:
		{
			iterator(2, exercise);

			break;
		}
		case 3:
		{
			iterator(13, food);

			break;
		}
		case 4:
		{
			iterator(3, hygeine);

			break;
		}
		case 5:
		{
			iterator(1, spouse);

			break;
		}
	}

	printf("\n");
}

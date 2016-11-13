/* Copyright آ© 2016, Xerxes Langerudi. All rights reserved */

#include <stdio.h>
#include <stdlib.h>

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

void printArray(short itemNumber, char items[][100])
{
    const char preElement[] = "\t";
    const char postElement[] = "\n";

    char *all;

    all = calloc(sizeof(char) * itemNumber * 100, '0');

    short i, y, x = 0;

    for (i = 0; i < itemNumber; i++)
    {
        for (y = 0; y < 100; y++)
        {
            char c = items[i][y];

            if (c != '\0')
            {
                all[x++] = c;
            }
            else
            {
                all[x++] = '\n';

                break;
            }
        }
    }

    printf("%s", all);

    free(all);
}

void showItem(int optionNumber)
{
    char study[][100] = {"Algorithms", "Concurrency", "Usability", "UI", "Compression", "Networking", "C Programming"};
    char exercise[][100] = {"Walking", "Bicycling"};
    char food[][100] = {"Water", "Cocoa Milk", "Joghurt", "Coffee", "Pasta", "Fish", "Banana", "Apples", "Pistacious", "Walnuts", "Almond", "Watermelon", "Sunflower seeds"};
    char hygeine[][100] = {"Morning shower", "Tooth brushing", "Laundry"};
    char spouse[][100] = {"(Further advances in the sciences is awaited to answer this)"};

    short i;

    switch (optionNumber)
    {
        case 1:
        {
            printArray(7, study);

            break;
        }
        case 2:
        {
            printArray(2, exercise);

            break;
        }
        case 3:
        {
            printArray(13, food);

            break;
        }
        case 4:
        {
            printArray(3, hygeine);

            break;
        }
        case 5:
        {
            printArray(1, spouse);

            break;
        }
    }

    printf("\n");
}

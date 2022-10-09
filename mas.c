#include <stdio.h>
#include <stdlib.h>
#include "fun.h"
void func()
{
    int i = 0;
    int mas[76];
    printf("\n\n---------------------------\n");
    for (; i < 76; i++)
    {
        mas[i] = rand()%100-50;
        printf("%d\t", mas[i]);
    }
    printf("\n---------------------------\n");
    for (i = 0; i < 76; i++)
        if (mas[i] % 3 == 0)
            mas[i] = 1;
    for (i = 0; i < 76; i++)
	printf("%d\t", mas[i]);
    printf("\n---------------------------\n");
}
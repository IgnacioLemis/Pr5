#include <stdio.h>
#include <stdlib.h>
#include "fun.h"

void func()
{
    int mat[5][6];
    printf("\n---------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
	{
            mat[i][j] = rand()%100-50;
	    printf("%d\t", mat[i][j]);
	}
        printf("\n");
    }	
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 6; j++)
            if (mat[i][j] % 3 == 0)
                mat[i][j] = 1;
    printf("\n---------------------------\n");
    for (int i = 0; i < 5; i++)
    {
     	for (int j = 0; j < 6; j++)
	    printf("%d\t", mat[i][j]);
	printf("\n");
    }
    printf("\n---------------------------\n");
}
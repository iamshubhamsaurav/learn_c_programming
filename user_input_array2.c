#include <stdio.h>
int main()
{
    int table[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\nPlease enter value for row: %d and column: %d ", i, j);
            scanf("%d", &table[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \n", table[i][j]);
        }
    }

    return 0;
}
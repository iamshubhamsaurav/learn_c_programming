#include <stdio.h>

int main()
{

    int table[2][3] = {
        {4, 6, 8}, // 0
        {3, 5, 7}  // 1
    };

    int table2[2][3];
    table2[0][0] = 1;
    table2[0][1] = 2;
    table2[0][2] = 3;
    table2[1][0] = 4;
    table2[1][1] = 5;
    table2[1][2] = 6;

    table[1][1] = 9;

    printf("%d \n", table[1][1]);
    printf("Printing Table2\n");
    for (int i = 0; i < 2; i++)
    { // i = 2
        for (int j = 0; j < 3; j++)
        { // j = 3 [0 , 1 ,2]
            printf("%d\n", table2[i][j]);
        }
    }

    return 0;
}
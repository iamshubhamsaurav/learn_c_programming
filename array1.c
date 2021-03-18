#include <stdio.h>

int main()
{

    float percents[3];
    percents[0] = 78.2;
    percents[1] = 91.2;
    percents[2] = 88.2;

    int marks[] = {88, 90, 78, 91};
    // printf("Array 1st element: %d", marks[0]);
    // printf("\nFloating Array: %f", percents[2]);
    // // Changing the value of element
    // marks[2] = 100;
    // printf("\n Array 3rd element: %d", marks[2]);
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d", marks[i]); //marks[3]
    }

    return 0;
}
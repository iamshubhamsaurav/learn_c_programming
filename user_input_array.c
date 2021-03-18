#include <stdio.h>

int main()
{
    int nums[4]; // 0, 1, 2, 3
    for (int i = 0; i < 4; i++)
    {
        printf("Please enter value for %d index: ", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 4; i++) // 0 ,1, 2, 3
    {
        printf("%d \n ", nums[i]);
    }

    return 0;
}
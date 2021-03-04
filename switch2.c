
#include <stdio.h>

int main()
{
    char c;
    printf("Please enter a, b or c: ");
    scanf("%c", &c);

    switch (c)
    {
    case 'a':
        printf("Apple");
        break;
    case 'b':
        printf("Ball");
        break;
    case 'c':
        printf("Cat");
        break;
    default:
        printf("Please enter a, b or c");
    }

    return 0;
}
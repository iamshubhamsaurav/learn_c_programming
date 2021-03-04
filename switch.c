// Switch Statement
// The switch statement allows us to execute one code block among many alternatives.

// You can do the same thing with the if...else..if ladder. However, the syntax of the switch statement is much easier to read and write.

#include <stdio.h>

int main()
{
    int dayNo;
    printf("Please enter day: ");
    scanf("%d", &dayNo);

    switch (dayNo)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Please enter a valid day");
    }

    return 0;
}
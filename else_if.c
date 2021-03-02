#include <stdio.h>

int main()
{
    int age;
    printf("Please enter age : ");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("Age is  more than 18");
    }
    else if (age == 18)
    {
        printf("Age is 18");
    }
    else
    {
        printf("Age is less than 18");
    }

    return 0;
}
// age = 19
//(age > 18) = 1
// !(age > 18) = !(1) = 0

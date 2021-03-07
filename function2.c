#include <stdio.h>

int sumOfNumbers(); // function prototype

int main()
{
    int mySum;
    mySum = sumOfNumbers();
    printf("mySum = %d", mySum);

    mySum = mySum + 1;
    printf("mySum = %d", mySum);
    return 0;
}

int sumOfNumbers()
{
    int num1, num2, sum;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    return sum;
}
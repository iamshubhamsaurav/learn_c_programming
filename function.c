// no argument no return type function
// no argument return type function
//  argument no return type function
//  argument  return type function

#include <stdio.h>

void sumOfNumbers(); // function prototype

int main()
{
    sumOfNumbers();
    sumOfNumbers();
    return 0;
}

void sumOfNumbers()
{
    int num1, num2, sum;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("\nEnter 2nd number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("\nSum = %d", sum);
}

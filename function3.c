#include <stdio.h>

void sumOfNumbers(int, int);
void subOfNumbers(int, int);

int main()
{
    int n1, n2;
    printf("please enter value 1: ");
    scanf("%d", &n1);
    printf("\nPlease enter value 2: ");
    scanf("%d", &n2);
    sumOfNumbers(n1, n2);
    subOfNumbers(n1, n2);
    return 0;
}

void subOfNumbers(int number1, int number2)
{
    int sub = number2 - number1;
    printf("\nSub: %d", sub);
}

void sumOfNumbers(int num1, int num2)
{
    int sum = num1 + num2;
    printf("\nNum 1: %d", num1);
    printf("\nNum 2: %d", num2);
    printf("\nSum = %d", sum);
}
#include <stdio.h>

int sumOfNumbers(int, int);
int subOfNumbers(int, int);

int main()
{
    int n1, n2, add, sub;
    printf("Please enter number 1: ");
    scanf("%d", &n1); //4
    printf("\nPlease enter number 2: ");
    scanf("%d", &n2);           //7
    add = sumOfNumbers(n1, n2); // add = 14
    printf("\nAddition: %d", add);
    sub = subOfNumbers(n1, n2);
    printf("\nSubtraction: %d", sub);
    return 0;
}

int sumOfNumbers(int num1, int num2) //num1 = 4, num2 = 7
{
    int sum = num1 + num2; // 14
    return sum;            //14
}

int subOfNumbers(int num1, int num2)
{
    int sub = num1 - num2;
    return sub;
}

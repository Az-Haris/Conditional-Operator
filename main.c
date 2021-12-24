#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num1, num2, res;
    printf("Enter 1st Number : ");
    scanf("%d", &num1);
    printf("Enter 2nd Number : ");
    scanf("%d", &num2);
    res=num1>num2? num1:num2;
    printf("Largest Number is = %d", res);
    getch();
    return 0;
}

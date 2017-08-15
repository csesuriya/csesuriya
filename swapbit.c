#include <stdio.h>
int main()
{
int num1, num2;
printf("Enter any two numbers: ");
scanf("%d%d", &num1, &num2);
printf("Before swapping x and y :%d %d",num1,num2);
num1 ^= num2;
num2 ^= num1;
num1 ^= num2;
printf("After swapping x and y :%d %d",num1,num2);
}

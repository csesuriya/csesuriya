#include<stdio.h>
void main()
{
int i,num,ran;
printf("enter the number");
scanf("%d",&num);
printf("enter the range");
scanf("%d",&ran);
for(i=1;i<=ran;i++)
{
printf("%d * %d = %d ",num, i, num*i);
}
}

#include<stdio.h>
void main()
{
int num,ornum,remain,res=0;
printf("Enter a three digit integer: ");
scanf("%d",&num);
ornum=num;
while(ornum!=0)
{
remain=ornum%10;
res+=remain*remain*remain;
ornum/= 10;
}
if(res==num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
}

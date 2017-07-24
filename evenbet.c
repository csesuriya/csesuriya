#include<stdio.h>
void main()
{
int fir,end,i;
printf("enter the number");
scanf("%d %d",&fir,&end);
for(i=fir;i<=end;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
}

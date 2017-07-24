#include<stdio.h>
void main()
{
int i,fir,end;
printf("enter the two number");
scanf("%d %d",&fir,&end);
for(i=fir;i<=end;i++)
{
if(i%2==1)
{
printf("%d",i);
}
}
}

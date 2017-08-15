#include<stdio.h>
void main()
{
int sum=0,sum1=0,ans,i;
for(i=1;i<=15;i++)
{
sum=sum+i;
}
for(i=15;i<=45;i++)
{
if(i%2==1)
{
sum1=sum1+i;
}
}
ans=sum+sum1;
printf("%d",ans);
}

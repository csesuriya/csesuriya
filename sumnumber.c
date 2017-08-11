#include<stdio.h>
void main()
{
int num;i,sum=0,ans;
printf("enter the number");
scanf("%d",&num);
for(i=1;i<num;i++)
{
sum=sum+i;
}
ans=sum+num;
printf("%d",ans);
}

#include<stdio.h>
void main()
{
int n1,n2,gcd,i;
printf("enter the two number");
scanf("%d %d",&n1,&n2);
for(i=1;i<=n1&&i<=n2;i++)
{
if(n1%i==0&&n2%i==0)
{
gcd=i;
}
}
printf("GCD is=%d",i);
}

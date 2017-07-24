#include<stdio.h>
void amin()
{
int i,nflag=0;
printf("enter the number");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
}
}
if(flag==0)
printf("%d is prime number",n);
else
printf("%d is not prime number",n);
}

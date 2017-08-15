#include<stdio.h>
void main()
{
int n1,n2,x,y;
printf("Enter two numbers:");
scanf("%d %d",&n1,&n2);
x=n1,y=n2;
while(n1!=n2)
{
if(n1>n2)
n1=n1-n2;
else
n2=n2-n1;
}
printf("LCM=%d",x*y/n1);
}

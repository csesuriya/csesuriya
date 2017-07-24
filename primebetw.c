#include <stdio.h>
void main()
{
int f,e,i,cot;
printf("Enter two numbers");
scanf("%d %d",&f,&e);
printf("Prime numbers between %d and %d are ",f,e);
while(f<e)
{
cot=0;
for(i=2;i<=f/2;i++)
{
if(f%i==0)
{
cot=1;
}
}
if(cot==0)
printf("%d",f);
++f;
}
}

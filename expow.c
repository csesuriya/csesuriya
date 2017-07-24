#include<stdio.h>
void main()
{
int bas,exp,cunt,res=1;
printf("enter base and exp ");
scanf("%d %d",&bas,&exp);
for(cunt=0;cunt<exp;cunt++)
{
res=res*bas;
}
printf("%d^%d=%d",bas,exp,res);
}

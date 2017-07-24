#include <stdio.h>
void main()
{
int first,last,i,cunt;
printf("Enter two numbers");
scanf("%d %d",&first,&last);
printf("Prime numbers between %d and %d are ",first,last);
while (first<last)
{
cunt=0;
for(i=2;i<=first/2;++i)
{
if(first%i==0)
{
cunt=1;
}
}
if(cunt==0)
printf("%d ",first);
++first;
}
}

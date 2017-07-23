#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three diff numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is largest",a);
}
elseif(b>a && b>c)
{
printf("%d is largest",b);
}
elseif(c>a && c>b)
{
printf("%d is largest",c);
}
}

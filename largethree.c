#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three number");
scanf("%d %d %d",&a,&b,&c);
if(a>=b&&a>=c)
printf("%d is large",a);
elseif(b>=c&&b>a)
printf("%d is large",b);
elseif(c>=a;&&c>b)
printf("%d is large",c);
}

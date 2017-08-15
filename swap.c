#include<stdio.h>
void main()
{
int x,y,temp;
printf("enter the x and y values");
scanf("%d %d",&x,&y);
printf("after swap the value");
temp=x;
x=y;
y=x;
printf("%d %d",x,y);
}

#include<stdio.h>
void main()
{
char c[100];
int i,cudig=0,cuchar=0;
printf("enter the number");
scanf("%c",&c);
for(i=0;c[i]!=null;i++)
{
if(c[i]>=0 && c[i]<=9)
cudig++;
elseif(c[i]>='a' && c[i]<='z' ||c[i]>='A' && c[i]<='Z')
cuchar++
}
printf("no.of num=%d \n no.of char=%d",cudig,cuchar);
}

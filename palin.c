#include<stdio.h>
void main()
{
char a;
int i,len,flag=0;
printf("enter string");
scanf("%c",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]==a[len-i-1])
flag=flag+1;
}
if(flag==len)
printf("string is palindrome");
else
printf("string is not palindrome");
}

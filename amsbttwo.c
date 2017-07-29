#include <stdio.h>
#include <math.h>
int main()
{
int lo,hig,i,temp1,temp2,remain,n=0,res=0;
printf("Enter two numbers:");
scanf("%d %d",&lo,&hig);
printf("Armstrong numbers between %d an %d are:",lo,hig);
for(i=lo+1;i<hig;++i)
{
temp2=i;
temp1=i;
while(temp1!=0)
{
temp1/=10;
++n;
}
while(temp2!=0)
{
remain=temp2%10;
res +=pow(remain,n);
temp2/=10;
}
if(res==i) 
{
printf("%d",i);
}
n=0;
}
}

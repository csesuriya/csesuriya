#include <stdio.h>
void main()
{
int n,i;
printf("enter the number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      cou++;
    }
  }
  if(cou==2)
  {
    printf("number is prime number");
  }
  else
  {
    printf("number is not prime number");
  }
}

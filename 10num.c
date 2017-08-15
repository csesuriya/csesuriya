#include<stdio.h> 
void main() 
{ 
int n=10,m,i,max;  
printf("Enter the numbers"); 
scanf("%d",&m); 
max=m; 
for(i=2;i<=n;i++) 
{
scanf("%d",&m); 
if(m>max) 
max=m; 
} 
printf("The Largest Number is %d",max); 
}

import java.io.*;
import java.util.*;
public class fosu
{
public static void main(String args[])
{
int n,sum=0,i;
Scanner sc=new Scanner(System.in);
System.out.println("enter the number");
n=sc.nextInt();
for(i=1;i<=n;i++)
{
sum=sum+i;
}
System.out.println("sum="+sum);
}
}

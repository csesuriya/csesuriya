import java.io.*;
import java.util.*;
public class noofint
{
public static void main(String args[])
{
int num,cunt=0;
Scanner sc=new Scanner(System.in);
System.out.println("enter the number");
num=sc.nextInt;
if(num>0)
{
cunt++;
num=num/10;
}
System.out.println("no.of digit="+cunt);
}
}

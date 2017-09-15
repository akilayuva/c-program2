#include<stdio.h>
#include<conio.h>
void main()
{
int n,res=0,a;
clrscr();
printf("Enter the number:");
scanf("%d",&n)
a=n;
while(n!=0)
{
res=(res+n);
n--;
}
printf("The sum of all numbers less than %d is %d",a,res);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,a,b,t,lcm;
clrscr();
printf("Enter the two numbers:");
scanf("%d %d",&x,&y);
a=x;
b=y;
while(b!=0)
{
t=b;
b=a%b;
a=t;
}
lcm=(x*y)/a;
printf("The lcm of the two numbers is:%d",lcm);
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("enter the character");
scanf("%s",&x);
if((x>='a')&&(x<='z')||(x>='A')&&(x<='Z'))
{
printf("%s is an alphapet",&x);
}
else
{
printf("%s is not an alphapet",&x);
}
getch();
}

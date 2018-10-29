#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
int fact=1;
printf("Enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
 fact=(fact*i);
 }
 printf("The result is %d",fact);
 getch();
 }
 


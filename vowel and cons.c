#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Enter character");
scanf("%s",&x);
if((x=='a')||(x==''A)||(x=='e')||(x=='E')||(x=='i')||(x=='I')||(x=='o')||(x=='O')||(x=='u')||(x=='U'))
{
printf("%s is vowel",&x);
}
else
{
printf("%s is consonant",&x);
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
scanf("%c",&a);
if((a>='a'&&a<='z')||(a>='A'&&'Z'))
printf("Alphabet");
else
printf("not an alphabet");
getch();
}

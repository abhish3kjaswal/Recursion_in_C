#include<stdio.h>
#include<conio.h>
int dig(int x);
void main()
{
clrscr();
int x;
printf("103* * enter the digits:");
scanf("%d",&x);
printf("value:%d",dig(x));
getch();
}
int dig(int x)
{
static int c=0;
if(x>0)
{
c++;
dig(x/10);
}
return c;
}
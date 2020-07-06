#include<stdio.h>
#include<conio.h>
int snum(int x);
void main()
{
clrscr();
int x;
printf("sum of natural numbers:1/16/fet/bcc/1/103\n");
printf("enter no till you want to add:");
scanf("%d",&x);
printf(":%d",snum(x));
getch();
}
int snum(int x)
{
if(x!=0)
{
return x + snum(x-1);
}
else
{
return x;
}
}
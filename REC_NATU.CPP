#include<stdio.h>
#include<conio.h>
int nat(int x);
void main()
{
clrscr();
int s=50;
nat(s);
getch();
}
int nat(int x)
{
if(x!=0)
{
nat(x-1);
printf("\t%d",x);
}
return x;
}
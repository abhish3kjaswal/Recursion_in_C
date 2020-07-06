#include<stdio.h>
#include<conio.h>
int fact(int );
void main()
{
clrscr();
int n;
printf("enter the number:");
scanf("%d",&n);
int x = fact(n);
printf("the value of %d factotrial is %d",n,x);
getch();
}
int fact(int n)
{
if(n==0)
{
return 1;
}
return(n*fact(n-1));
}
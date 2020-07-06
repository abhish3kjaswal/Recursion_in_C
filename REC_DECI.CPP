#include<stdio.h>
#include<conio.h>
int find(int );
void main()
{
clrscr();
int d;
printf("enter the decimal number:");
scanf("%d",&d);
printf("binary number is:%d",find(d));
getch();
}
int find(int d)
{
if(d==0)
{
return 0;
}
else
{
return(d%2+10*find(d/2));
}
}
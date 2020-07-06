#include<stdio.h>
#include<conio.h>
int gcd(int x,int y);
void main()
{
clrscr();
int x,y;
printf("103 ** gcd **\n");
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
printf("%d",gcd(x,y));
getch();
}
int gcd(int x,int y)
{
if(x==0)
	return x;
if(y==0)
	return y;
if(x==y)
	return x;
if(x>y)
	return gcd(x-y,y);
if(y>x)
	return gcd(x,y-x);
}




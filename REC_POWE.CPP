#include<stdio.h>
#include<conio.h>
int  pow(int , int );
void main()
{
clrscr();
int num,p;
printf("enter the number :");
scanf("%d",&num);
printf("enter the power :");
scanf("%d",&p);
int c= pow(num,p);
printf("%d to the power %d is = %d",num,p,c);
getch();
}
int pow(int num,int p)
{
if(p!=0)
{
return num * pow(num,p-1);
}
return 1;
}
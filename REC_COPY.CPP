#include<stdio.h>
#include<conio.h>
void cop(char [],char [],int );
void main()
{
clrscr();
char a[10],r[10];
printf("enter the string :");
gets(a);
printf("original string is :%s",a);
cop(a,r,0);
printf("\ncopied string is:%s",r);
getch();
}
void cop(char a[],char r[],int i)
{
r[i]=a[i];
if(r[i]=='\0')
{
return;
}
cop(a,r,i+1);
}
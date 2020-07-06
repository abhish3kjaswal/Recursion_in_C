#include<stdio.h>
#include<conio.h>
void fc(char [],int );
void main()
{
clrscr();
char str[10];
int i=0;
printf("enter the string :");
gets(str);
fc(str,i);
getch();
}
void fc(char a[],int i)
{
if(a[i]!='\0')
{
if((a[i]>='A') && (a[i]<='Z'))
{
 printf("first capital letter in string  %s found at %d which is %c" ,a,i,a[i]);
}
fc(a,i+1);
}
}
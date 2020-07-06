#include<stdio.h>
#include<conio.h>
int lno(int a[]);
void main()
{
clrscr();
int a[]={10,29,23,43,2,34};
printf("103 ** largest number:\n\n");
printf("value :%d",lno(a));
getch();
}
int lno(int a[])
{
static int i=0,h=0;
if(i<=6)
{
 if(h<a[i])
 {h=a[i]; }
i++;
lno(a);
}
return h;
}
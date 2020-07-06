#include<stdio.h>
#include<conio.h>
int arele(int a[],int l,int u);
void main()
{       clrscr();
int a[]={2,4,6,8,10,12};
int u,l;
l=0;
u=6;
printf("103 array elements are :\n");
arele(a,l,u);
getch();
}
int arele(int a[],int l,int u)
{
if(l>=u)
{
return 0;
}
else
{
printf("%d\t",a[l]);
arele(a,l+1,u);
}
return 0;
}
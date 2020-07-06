#include<stdio.h>
#include<conio.h>
int sdig(int x);
void main()
{
clrscr();
int x;
printf("103** enter the number:");
scanf("%d",&x);
printf("value:%d",sdig(x));
getch();
}
int sdig(int x)
{
int s=0;
if(x>0)
return(x%10 + sdig(x/10));


}
#include<stdio.h>
#include<conio.h>
#include<string.h>
void revarr(char [],int ,int );
void main()
{
clrscr();
char str[100];
int size;
printf("enter the string:");
gets(str);
//scanf("%s",&str);
size=strlen(str);
revarr(str,0,size-1);
printf("the string is :%s",str);
getch();
}
void revarr(char str[],int index,int size)
{
int temp;
temp=str[index];
str[index]=str[size-index];
str[size-index]=temp;
if(index==size/2)
{
return;
}
revarr(str,index+1,size);
}
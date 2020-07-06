#include<stdio.h>
#include<conio.h>
void bin(int [],int ,int , int);
void main()
{
clrscr();
int a[20],size,x;
printf("enter the size :");
scanf("%d",&size);
printf("enter the the elements in ascending order:");
for(int i=0;i<size;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elements to be searched:");
scanf("%d",&x);
bin(a,0,size,x);
getch();
}
void bin(int a[],int low ,int high, int item)
{
int mid=(low+high)/2;
if(low==high)
{
	if(a[low]==item)
	{
	printf("element found at:%d",low);
	}
}
else
{
	if(item==a[mid])
	{
	printf("element  found at:%d",mid);
	}
	else if((item<=a[mid])&&(item!=a[mid]))
	{
	bin(a,low,mid,item);
	}
	else if((item>a[mid])&&(item!=a[mid]))
	{
	bin(a,mid+1,high,item);
	}
}
}
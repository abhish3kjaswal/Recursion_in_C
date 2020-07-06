#include<stdio.h>
#include<conio.h>
void binsearch(int [],int ,int ,int );
void main()
{
clrscr();
int a[10],l=0,u,x;
printf("enter the size :");
scanf("%d",&u);
printf("enter the elements in ascending order:");
for(int i=0;i<=u;i++)
{
scanf("%d",&a);
}
printf("enter the element to be searched:");
scanf("%d",&x);
binsearch(a,l,u,x);
getch();
}
void binsearch(int a[],int l,int u,int x)
{
int mid;
if(l==u)
{
	if(a[l]==x)
	{
	printf("element found at :%d",(l+1));
	}
}
else
{
mid=(l+u)/2;
	if(a[mid]>=x)
	{
	 printf("1st if\n");
		if(a[mid]==x)
		{
		printf("1stp if");
		 printf("element found at:%d",(mid+1));
			}
	       else{
	       printf("1stp else\n ");
		binsearch(a,l,mid,x);
	       }
	}
	if(a[mid]<x)
	{
		printf("2nd if\n");
		if(a[mid]==x)
		{
		printf("2ndp if\n");
		printf("element found at:%d",(mid+1));
		}
		else
		{       printf("2ndp else\n");
			binsearch(a,mid+1,u,x);
	}        }

}
}
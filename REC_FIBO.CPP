  #include<stdio.h>
  #include<conio.h>
  int fib(int x);
  void main()
  {
  clrscr();
  int n;
  printf("recursion fibonacci series 1/16/fet/bcc/1/103\n");
  printf("enter no. till fibonacci series to print:");
  scanf("%d",&n);
  for(int i=0;i<=n;i++)
  {
  printf("%d\t",fib(i));
  }
  getch();
  }
  int fib(int n)
  {
  if(n==0)
  {
	return 0;
  }
  if(n==1)
  {
	return 1;
  }
  else
  {
  return(fib(n-1) + fib(n-2));
  }
  }
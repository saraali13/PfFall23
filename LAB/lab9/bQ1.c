/***
*Name:S.Sara Ali
*Date:31-october-23
*Des:to find factorial of any integer N using recursion.
***/
#include <stdio.h>

int factorial(int n)
{
	int fact;
  if (n==1 || n==0)
  {
      return 1;
  }//end if
  else
   {
   	return n* factorial(n-1);
   // factorial(n-1);
   }//end else
 }//end void
 
int main()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  printf("%d",factorial(n));
 return 0;
}//end main

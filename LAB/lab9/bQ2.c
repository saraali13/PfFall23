/***
*Name:S.Sara Ali
*Date:31-october-23
*Des:to find product of 2 numbers without using multiplication operator and
loops and Use recursion only.
***/
#include<stdio.h>
int product(int a, int b)
{
	if(b==0)
	{
		return 0;
	}//end if
	else if (b>0)
	{
		return a+product(a, b-1);
	}//end else if
//	else
	//{
		//return -product(a,-b);
//	}
}//end void
int main()
{
	int n1, n2, ans;
	printf("Enter number 1\n");
	scanf("%d", &n1);
	printf("Enter number 2\n");
	scanf("%d", &n2);
	ans= product(n1, n2);
	printf("product of %d and %d is %d",n1,n2,ans);
}//end main

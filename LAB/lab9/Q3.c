/***
*Name:S.Sara Ali
*Date:31-october-23
*Des:
***/
#include <stdio.h>
int main()
{
	int n;
	printf("enter the size of array");
	scanf("%d",&n);
	int *arra[n];
	char *arrb[n];
	long long int *arrc[n];
	printf("enter elements in integer array");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arra[i]);
	}//end for
	printf("enter elements in character array");
	for (int i=0;i<n;i++)
	{
		scanf(" %c",&arrb[i]);
	}//end for
	printf("enter elements in long integer array");
	for (int i=0;i<n;i++)
	{
		scanf("%ld",&arrc[i]);
	}//end for
	printf("integer array\n");
	for (int i=0;i<n;i++)
	{
		printf("adress=%d,element=%d\n",&arra[i],arra[i]);
	}//end for
	printf("character array\n");
	for (int i=0;i<n;i++)
	{
		printf("adress=%d,element%c\n",&arrb[i],arrb[i]);
	}//end for
	printf("long integer array\n");
	for (int i=0;i<n;i++)
	{
		printf("adress=%d,element=%ld\n",&arrc[i],arrc[i]);
	}//end for
	
}//end main

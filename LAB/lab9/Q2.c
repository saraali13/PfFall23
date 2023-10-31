/***
*Name:S.Sara Ali
*Date:31-october-23
*Des:to reverse an array using functions and pointers
***/
#include <stdio.h>
void reverse(int *arr,int n)
{
	int x;
	for (int i=0,j=9;i<5,j>5-1;i++,j--)
	{
	// for (int j=9;i>5;i--)
    //	{
			x=arr[i];
			arr[i]=arr[j];
			arr[j]=x;
    //	}//end for j
	}//end for i

}//end void
int main()
{
	int n,x;
//	printf("enter the size of array\n");
//	scanf("%d",&n);
	int arr[10];
	printf("enter the elements in the array\n");
	for (int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}//end for
reverse(&arr[0],n);
	for (int i=0;i<10;i++)
	{
		printf("%d\t",arr[i]);
	}//end for
}//end main

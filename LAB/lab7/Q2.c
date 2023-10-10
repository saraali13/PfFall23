/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: rotate the elements of an array 
*/
#include <stdio.h>

int main() {
	
    int n , d ,x;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {  
    	printf("enter the value of %d array\n",i);
    	scanf("%d",&arr[i]);
    }// end for 
printf("enter location of an array");
scanf("%d",&d);
   for (int i=0;i<d;i++)
    {
    	x=arr[0];
    	for (int j=0;j<n-1;j++)
    	{
			arr[j]=arr[j+1];
       //printf("%d ",arr[i]);
        }// end for
        arr[n-1]=x;
    }// end for

  for (int k=0;k>n;k++)
    {
	   printf("%d ",arr[k]);
    }// end for

return 1;
}// end main

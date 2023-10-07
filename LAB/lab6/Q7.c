/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: sum of num in an array 
*/
#include <stdio.h>

int main() {
	
    int x, sum=0 ,n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
   for (int i=0;i<n;i++)
      {
    	scanf("%d",&arr[i]);
    	sum=sum+arr[i];
      }// end for
   printf("sum=%d",sum);            
    return 0;
}//end main

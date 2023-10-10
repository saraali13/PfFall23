/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: sum of elements of an array 
*/
#include <stdio.h>

int main() {
	
    int n , sum=0;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {  
    	scanf("%d",&arr[i]);
    	sum=sum+arr[i];
    }// end for 
    printf("%d",sum);
    return 1;
}// end main

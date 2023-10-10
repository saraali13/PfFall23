/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: print inverse of elements present in an array 
*/
#include <stdio.h>

int main() {
	
    int n;
    printf("enter size of array");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        {  
    	printf("enter the value of %d array\n",i);
    	scanf("%d",&arr[i]);
    	printf("the value of %d array is %d\n",i,arr[i]);
        }// end for 
    //n=9;
    //int arr[9]={1,2,3,4,5,6,7,8,9} ;
    for (int i=n;i>=0;i--)
    {
    	
    	printf("%d",arr[i]);
	}  // end for    
    return 0;
}//end main

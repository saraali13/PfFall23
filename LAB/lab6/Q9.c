/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description:Max and Min num in an array
*/
#include <stdio.h>

int main() {
	int n,sum=0,max,min;
	printf("enter size of array you want");
	scanf("%d",&n);
	int array[n];
	for(int i = 0; i < n; i++) {
		printf("enter %d array items: ",i);
		scanf("%d",&array[i]);
	}// end for
	max=min=array[0];
	for(int i = 0;i<n;i++) {
	//condition to check max values
		if(array[i]>max) {
			max=array[i];
		}// end if
	//condition to check min values
		if(array[i]<min) {
			min=array[i];
		}// end if
	}// end for
	
	printf("the smallest value in the array is: %d\n",min);
	printf("the largest value in the array is: %d\n",max);
	return 1; 
}//end main

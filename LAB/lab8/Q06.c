/***
*Name:S.Sara Ali
*Date:24-10-23
*Des:to write a C program that defines a user-defined function processArray to calculate the sum, maximum, and
minimum values in the array
***/


#include <stdio.h>
void processArray(int arr[], int size){
	int i, sum=0, max, min;
	min=max=arr[0];
	for(i=0; i<size; i++){
		sum = sum + arr[i];
		if (arr[i] < min){
			min = arr[i];
		}//end if
		if (arr[i] > max){
			max = arr[i];
		}//end if
	}//end for
	printf("The sum of your array is: %d\n The maximum value of your array is: %d\n The minimum value of your array is: %d", sum, max, min);
}//end processArray

int main(){
	int size;
	printf("Enter the size of your array:");
	scanf("%d", &size);
	int arr[size];
	for(int i=0; i<size; i++){
		scanf("%d", &arr[i]);
	}//end for
	processArray(arr, size);
}//end main

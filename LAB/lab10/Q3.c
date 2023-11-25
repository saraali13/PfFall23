/***
Name:S.Sara Ali
Description: populate a 2-d array with consecutive prime numbers using Dynamic memory allocation
Date:14/22/23
***/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int n) 
{
    if (n< 2) {
        return false;
    }//end if
    
    int i;
    for ( i = 2; i*i<= n; ++i) //if well use only i instead of i*i then 2 will not be considered as PN acc to the if condition stated bellow
	{
        if (n % i == 0) {
            return false;
        }//end if
    }//end for i
    return true;
}//end bool
void fillWithPrimes(int **arr, int rows, int cols) {
    int Num = 2;
    
    int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            if (!isPrime(Num)) {
                Num++;
            }// end while
            arr[i][j] =Num;
            Num++;
        }//end for j
    }// for i
}//end void

void printArray(int **arr, int n1, int n2) {
    int i,j;
	for ( i = 0; i < n1; i++) {
        for ( j = 0; j < n2;j++) {
            printf("%d\t", arr[i][j]);
        }//end for i
        printf("\n");
    }//end for i
}//end void

int main() {
    int n1,n2,i;
    printf("Enter the number of rows and columns of array: ");
    scanf("%d %d",&n1,&n2);
    int **Arr= (int **)malloc(n1*sizeof(int *));
    for ( i = 0; i < n1; ++i) {
        Arr[i] = (int *)malloc(n2*sizeof(int));
    }// end for 
    fillWithPrimes(Arr,n1,n2);
    printf("2D Array filled with prime numbers:\n");
    printArray(Arr,n1,n2);
    for ( i = 0; i < n1; ++i) {
        free(Arr[i]);
    }//end for(free)
    free(Arr);
    return 0;
}//end main

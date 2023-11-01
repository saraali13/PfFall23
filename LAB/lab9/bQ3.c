/***
*Name:S.Sara Ali
*Description: printing fibbonaci sequence with recursion
*Date:31/10/23
***/
#include <stdio.h>
int fibonacci(int n) {
    if (n<=1) 
	{
        return n;
    }//end if
	else 
	{
        return (fibonacci(n - 1)+fibonacci(n - 2));
    }//end else
}//end fibonacci

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i=0;i<n;i++)
	 {
        printf("%d ",fibonacci(i));
     }//end for
    return 0;
}//end main

/***
*Name:S.Sara Ali
*Description: calculating gcd with using recursion
*Date:31/10/23
***/

#include <stdio.h>
int gcd(int a, int b) 
{
    if (b == 0) 
	{
        return a;
    }//end if
    return gcd(b, a % b);
}//int gcd

int main() {
    int n1,n2;
    printf("Enter two numbers to find their GCD\n");
    scanf("%d %d",&n1,&n2);
    int result = gcd(n1,n2);
    printf("GCD using recursion for %d and %d is %d",n1,n2,result);

    return 0;
}//end main

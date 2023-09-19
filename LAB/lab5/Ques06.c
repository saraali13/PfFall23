#include <stdio.h>
#include <math.h>

int main () {
    int n;
    int b7;
    int b4;
    printf("enter 8 bit number");
    scanf("%d",&n);
    b7=(n/1000000)%10 ;
    b4=(n/1000)%10 ;
    if (b7 && b4)
    {
     n = n - 1000000-1000 ;   
    }
    printf("%d",n);
    return 1;
}// end main
    

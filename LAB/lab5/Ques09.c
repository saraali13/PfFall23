#include <stdio.h>
#include <math.h>

int main () {
    int a;
    int b;
    int c;
    int D;
    int x1;
    int x2;
    printf("enter values");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b-(4*a*c);
   x1=(-b+sqrt(D))/2*a ;
   x2=(-b-sqrt(D))/2*a ;
   printf("Root 1 is :%d\n",x1);
   printf("Root 2 is :%d\n",x2);
    return 1;
}// end main
    
    


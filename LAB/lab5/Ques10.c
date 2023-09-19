#include <stdio.h>
#include <math.h>

int main () {
    int a;
    int b;
    int c;
    int D;
    printf("enter values");
    scanf("%d %d %d",&a,&b,&c);
    D = b*b-(4*a*c);
    if (D==0)
    {
      printf("roots are real and equal");
    }
    else if (D>0)
     {
         printf("root are real and unequal");
     }
    else if (D<0)
    {
      printf("roots are unequal and complex");  
    }
    return 1;
}// end main
    
    



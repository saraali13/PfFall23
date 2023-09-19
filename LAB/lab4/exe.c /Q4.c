//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main() {
           int x;
           printf("enter a number greater than o");
           scanf("%d",&x);
           int y;
           printf("enter a number greater than o");
           scanf("%d",&y);
           int z;
           printf("enter a number greater than o");
           scanf("%d",&z);
           int ans1;
           int ans2;
           printf("Quadratic solution of x,y and z");
           ans1 = (-y + sqrt((y*y)-(4*x*z)))/2*x ;
           ans2 = (-y - sqrt((y*y)-(4*x*z)))/2*x ;
           printf("Quadratic solution is %d %d", ans1 ,ans2);
return 0;
}//end main

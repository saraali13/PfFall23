/** 
name:S.Sara Ali
date:10-10-23
des:dev numbers without using division operators
**/
#include <stdio.h>
int main () {
int a,b,q=0 ;
printf("enter any two numbers");
scanf("%d %d",&a ,&b);
int c=a ;
while(a>=b) {
      a=a-b;
      q++ ;
   }// end while
   printf("%d divided by %d is %d",c,b,q);
return 1;
}// end main 

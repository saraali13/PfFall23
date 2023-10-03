#include <stdio.h>>

int main (){
int n , x , i=1 ,sum=0 ;
printf("enter any number");
scanf("%d",&n);
do {
    x=n%i;
   if (x==0)
   { sum=sum+i ; 
     i++ ;     }// end if 
   else { i++; }
   }while (i<n);   // end do while
 if (sum==n)
   { printf("entered number is a perfect number"); }// end if
 else { printf(" entered numbr is not a perfect number"); }// end else
return 1;
}// end main

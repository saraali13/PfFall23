#include <stdio.h>
#include <math.h>

int main () {
    int L;
    printf("enter light sensor value");
    scanf("%d",&L);
    if (L>500)
     { printf("under sunshine");
     }// end if
    else if ((L>0)&&(L<100))
     { printf("It's evening");
     }// end else if
    else if ((L>= 100)&&(L<=500))
     { printf("lighting");
     }//end else if
    return 1;
}// end main

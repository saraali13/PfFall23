#include <stdio.h>
#include <math.h>

int main () {
    int op;
    int sale;
    int sa;
    int amount;
    printf("enter orignal price");
    scanf("%d",&op);
    if ((op<2000)&&(op>=6000))
     { sale = 50 ;
       amount =(sale*op)/100 ;
       sa=op-amount ;
     }// end if
    else if ((op >= 2000)&&(op<=4000))
     { sale = 20 ;
       amount =(sale*op)/100 ;
       sa=op-amount ;
     }// end else if
    else if ((op >= 4001)&&(op<=6000))
     { sale = 30 ;
       amount =(sale*op)/100 ;
       sa=op-amount ;
     }//end else if
    printf("orignal price:%d\n",op);
    printf("total amount after sale:%d\n",amount);
    printf("saved amount:%d\n",sa);
    return 1;
}// end main

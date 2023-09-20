#include <stdio.h>

int main() {
    int bin,bit,higher_nibble=0,lower_nibble,j,i=0,ans ;
    printf("enter 8 bit binary number:");
    scanf("%d",&bin);
    if (bin<10)
    {
        printf("enter atleast two digits");
    }//end if
    lower_nibble=bin/10000 ;
    while (i<4)
    {
        bit=bin%10;
        bin=bin/10;
        j=i;
        while(j>0)
        {
            bit=bit*10;
            j=j-1 ;
        }//end while
        higher_nibble=higher_nibble+bit ;
        i=i+1 ;
    }//end while
        higher_nibble=higher_nibble*10000 ;
        ans=higher_nibble + lower_nibble ;
        printf("%08d",ans);
}//end main

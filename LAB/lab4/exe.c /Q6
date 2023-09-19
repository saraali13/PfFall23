Ques no 6:

//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int i=1; // a counter variable for while loop1;
           int j=1; // a counter variable for while loop2;
           int n;
           printf("enter any number greater than 0");
           scanf("%d",&n);
           while(i<=n)
           {
               printf(" ");
                while(j<=n-i)
                {
                  j=j+1;
                  printf(" ");
                }// end while 
             printf("*");
             while (j <= (i - 1) * 2 - 1) 
             {
               if (j == (i - 1))
                    { printf("*");
                      }//end if
                else
                 { printf(" ");
                      j++; }// end else
               }// end while
                if (i > 1)
                { printf("*"); }
               printf("\n");
               i=i+1;
            }// end while
         i = n - 1;
          while (i >= 1)
          {
            while (j <= n - i)
            {
            printf(" ");
            j=j+1;
            }// end while
           printf("*");
           while (j <= (i - 1) * 2 - 1)
             {
             if (j == (i - 1))
               { printf("*"); 
                }// end if
             else
               { printf(" ");
                }// end else
             j=j+1;
           }// end while
           if (i > 1)
            { printf("*");
             }
          printf("\n");
          i=i-1;
    }// end while
    
return 0;
}//end main

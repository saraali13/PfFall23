Ques01.c
//--include file--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int i=1; // a counter variable for while loop1;
           int j=1; // a counter variable for while loop2;
           int n;
           printf("enter any number n greater than 0");
           scanf("%d",&n);
           while(i<=n)
           {
          	printf("\n");
            
           	while(j<=i)
          	{
           		printf("*");
           		j=j+1;
           	}
               i=i+1;
	    }
return 0;
}//end main
Ques02.c
//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int i=1; // a counter variable for while loop1;
           int j=1; // a counter variable for while loop2;
           int n;
           printf("enter any number n greater than 0");
           scanf("%d",&n);
           while(i<=n);	
           {
          	printf("\n");
            
           	while(j<=i);
          	{
           		printf("*");
           	}
	    }
return 0;
}//end main
Ques03.c
//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int n;
           printf("enter any number n greater than 0");
           scanf("%d",&n);
           int i;
           printf("enter an interger");
           scanf("%d",&i);
           int sum= 0;
           while(i<n);	
           {
          	i= i*i;
                sum = sum + i;
                printf("The sum of Squares of n integers");
                printf("the sum is:%d" ,sum);
	    }
return 0;
}//end main
Ques04.c
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
           int ans;
           printf("Quadratic solution of x,y and z");
           ans = (-y +- sqrt((y*y)-(4*x*z)))/2*x ;
           printf("Quadratic solution is %d", ans);
return 0;
}//end main
Ques05.c
//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int d1;
           printf("Date of birth of person 1");
           scanf("%d",&d1);
           int d2;
           printf("Date of birth of person 2");
           scanf("%d",&d2);
           int d;
           printf("Current date");
           scanf("%d",&d);
           int d3;
           d3 = d-d1 ;
           int d4;
           d4 = d-d2 ;
           int m1;
           printf("month of birth of person 1");
           scanf("%d",&m1);
           int m2;
           printf("month of birth of person 2");
           scanf("%d",&m2);
           int m;
           printf("Current month");
           scanf("%d",&m);
           int m3;
           m3 = m-m1 ;
           int m4;
           m4 = m-m2 ;
           int y1;
           printf("year of birth of person 1");
           scanf("%d",&y1);
           int y2;
           printf("year of birth of person 2");
           scanf("%d",&y2);
           int y;
           printf("Current year");
           scanf("%d",&y);
           int y3;
           y3 = y-y1 ;
           int y4;
           y4 = y-y2 ;
           int age1 ;
           age1 = d3,m3,y4 ;
           printf("Age of person 1 is:%d" ,d3);
           int age2 ;
           age2 = d4,m4,y4 ;
           printf("Age of person 2 is:%d" ,age1);
             if (age1>age2);
                 printf("Person 1 is older");
             if (age2>age1);
                 printf("Person 2 is older");
             if (age1=age2);
                 printf("Bith are of same age");   
return 0;
}//end main
Ques06.c
de files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int i=1; // a counter variable for while loop1;
           int j=i+1; // a counter variable for while loop2;
           int n;
           printf("enter any number greater than 0");
           scanf("%d",&n);
           while(i<=n)
           {
               printf("*");
               printf("\n");
                while(j<=n)
                {
                  j=j+1;
                  printf("*");
                  printf("\n");
                }// end loop while(j<=n) ;
             i=i+1;
           }// end loop while(i<=n) ;
return 0;
}//end main
Ques07.c
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int n;
           char lett;
           char c[20] = {0}; // declaring a character array for inputs
           int i;
           printf("enter any number of letters less than 20");
           int x = n ;
           scanf("%d",&n);
           while(i<n) // entering elements of array
           {
               printf("\nenter character %d:",i+1);
               scanf("%c",&lett);
               c[i]=lett;
               i=i+1;
           }
           i=0;
            while(i,n/2)// checks if the elements of array form a palindrome or not
                {
                  if(c[i]==c[x-1])
                    {
                      i=i+1;
                      x=n-1;
                    }
                else 
                  printf("print not a palindrome");
                }
                printf("it's a palindrome");
return 0;
}//end main
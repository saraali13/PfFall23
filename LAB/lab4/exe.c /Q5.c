Ques no 5:

//--include files--//
#include <stdio.h>
#include <stdlib.h>
//--Global variable--//

int main(){
           int d1;
           printf("Date of birth of person 1 :");
           scanf("%d",&d1);
           int d2;
           printf("Date of birth of person 2 :");
           scanf("%d",&d2);
           int d;
           printf("Current date :");
           scanf("%d",&d);
           int d3;
           d3 = d-d1 ;
           int d4;
           d4 = d-d2 ;
           int m1;
           printf("month of birth of person 1 :");
           scanf("%d",&m1);
           int m2;
           printf("month of birth of person 2 :");
           scanf("%d",&m2);
           int m;
           printf("Current month :");
           scanf("%d",&m);
           int m3;
           m3 = m-m1 ;
           int m4;
           m4 = m-m2 ;
           int y1;
           printf("year of birth of person 1 :");
           scanf("%d",&y1);
           int y2;
           printf("year of birth of person 2 :");
           scanf("%d",&y2);
           int y;
           printf("Current year :");
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
           printf("Age of person 2 is:%d \n" ,age1);
             if (age1>age2)
               {  printf("Person 1 is older\n");
               }// end if
            else if (age2>age1)
                { printf("Person 2 is older\n");
                }// end if
             else (age1==age2) 
                {
                 printf("Bith are of same age"); 
                }// end else
return 0;
}//end main

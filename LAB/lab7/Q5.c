/** 
*Name:S.Sara Ali
Date: 14-10-23 
Description: OUTPUT
   *****
   *****
   *****
***********
    * *
     |
    \_/
    | |
*************
** ***** **
** ***** **
** ***** **
** ***** **
   *****
   ** **
   ** **
   ** **
   ** **
   ** **
***** *****
**/
#include <stdio.h>
void cap(int n)
{
    int a,b;
    for(int i=0;i<n;i++)
	{
        for(int j =0;j<n*2;j++)
		{
            if(j<n)
			{
                printf(" ");
            }//end nested if
			else printf("*");
        }// end nested for
        printf("\n");
    }// end for
    for(int i=0;i<n*3-2;i++)
	{
        if(i<2)
		{
            printf(" ");
        }// end if
	   else printf("*");
    }// end for
    printf("\n");
}// end void cap

void face(int n)
{
    for(int i=0;i<n*2;i++)
	{
        if(i==n || i == n*2-1)
		{
            printf("*");
        }// end if
		else printf(" ");
    }// end for
    printf("\n");
    for(int i=0;i<n*2-2;i++)
	{
        if(i==n*2-3)
		  printf("|");
        else printf(" ");
    }// end for
    printf("\n");
    for(int j=0;j<2;j++)
	{
        for(int i=0;i<n+2;i++)
		{
            if(j==0)
			{
                if(i==n+1)
				{
                    printf(" (_)");
                    printf("\n\n");
                }// end nested if
                else printf(" ");
                
            }// end if
			else 
			{
                if(i==n+1)printf("| |");
                else printf(" ");
            }// end else
        }// end nested for
    }//end for
    printf("\n");
}//end void face

void body(int n)
{
    for(int i =0;i<n*3;i++)
	{
        printf("*");
    }// end for
    printf("\n");
    for(int j=0;j<n-2;j++)
	{
        for(int i=0;i<n*3;i++)
		{
            if(i<n||i>=n*2)
			printf("*");
           else printf(" ");
        }// end nested for
        printf("\n");
    }// end for
}//end void body
void legs(int n)
{
    for(int j=0;j<n;j++)
	{
        for(int i=0;i<=n*2;i++)
		{
            if(i<=n-1 || i==n*2-3 )
			{
                printf(" ");
            }//end if
		else printf("*");
        }// end nested for
        printf("\n");
    }// end for
    for(int i=0;i<n*3;i++)
	{
        if(i==n*2-3) printf(" ");
        else printf("*");
    }// ed for
}// end void(leg)
int main() 
{
    int a,b,c,i,j,k,n;
    printf("Enter a number = ");
    scanf("%d",&n);
    
    cap(n);
    face(n);
    body(n);
    legs(n);
    return 0;
}//end main

/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: multiplication of matrix
*/
#include <stdio.h>

int main() {
	int r1,r2,c1,c2 ,i,j ;
	int arr[i][j] ;
	
// foe 1st matrix //

	printf("1st Matrixx\n");
	printf("enter row and coloumn no of 2D array\n");
	scanf("%d %d",&r1,&c1);
	for (int i=0; i<r1; i++) 
	{
          for(int j=0;j<c1;j++)
	   {
           printf("Enter value for array %d %d:\n", i, j);
             scanf("%d",&arr[i][j]);  
		}// end for j
    }//end for i
    	for (int i=0; i<r1; i++) 
	{
          for(int j=0;j<c1;j++)
	   { 
           printf("%d\t",arr[i][j]);
	   }// for j
	   printf("\n");
   }// end for i
   
// for 2nd matrix //
   
   printf("2nd matrixx\n");
   printf("enter row and coloumn no of 2D array\n");
	scanf("%d %d",&r2,&c2);
	for (int i=0; i<r2; i++) 
	{
          for(int j=0;j<c2;j++)
	   {
           printf("Enter value for array %d %d:\n", i, j);
             scanf("%d",&arr[i][j]);  
		}// end for j
    }//end for i
    	for (int i=0; i<r2; i++) 
	{
          for(int j=0;j<c2;j++)
	   { 
           printf("%d\t",arr[i][j]);
	   }// for j
	   printf("\n");
   }// end for i
   
// for Multilpication //
   if (c1==r2)
   { printf ("multiplication is possible\n");
   }
   else printf("multiplication is not possible\n");
int sum;
  for(i=0;i<r1;i++)
    {
    	for(j=0;j<c2;j++)
    	{
    	  for(int k=0;k<c1;k++)
		    {
		    	sum=0;
		  	sum=sum+(arr[i][k]*arr[k][j]);
			  }// end for 	
    	    arr [i][j]=sum ;
		}// end for
	}// end for
  
  // printing product //
  
  printf("Product is :"):
	for (int i=0; i<r1; i++) 
     	{
          for(int j=0;j<c2;j++)
	      { 
           printf("%d\t",arr[i][j]);
	      }// for j
	   printf("\n");
        }// end for i
    return 1;
}// end main

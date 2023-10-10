/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: symetric matrix 
*/
#include <stdio.h>

int main() {
	int r,c,i,j;
	int arr[i][j] ;
	int transpose[j][i];
	printf("enter row and coloumn no of 2D array");
	scanf("%d %d",&r,&c);
	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   {
           printf("Enter value for array %d %d:", i, j);
             scanf("%d",&arr[i][j]);  
           // printf("%d",array[i][j]);
		}// end for j
    }//end for i
    	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   { 
           printf("%d\t",arr[i][j]);
	     //if (j<c-1) {
    	//	printf("\n"); }// end if
	   }// for j
	   printf("\n");
   }// end for i
  // for transpose
   	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   { transpose [j][i]=arr[i][j] ;
       }// end for
      printf("\n");
    }// end for
 for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
		   {
          	printf("%d\t",transpose[i][j]);
		   } 
		printf("\n");
    }//end for
    
    int count =0 ;
    for (int i=0; i<r; i++) 
    	{
           for(int j=0;j<c;j++) 
		    {
          	   if(transpose[i][j] == arr[i][j])
          	     {
          	    	count++ ;
			     }// end if
			   else
			     count=0; 
		   }// end for
    	}// end for
	
    if (count==4)
      { printf("\n matrix is symmetric");
      }
    else 
       { printf("\n matrix is non symmectric");
        }
}// end main

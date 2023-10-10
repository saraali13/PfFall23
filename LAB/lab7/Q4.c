/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: symetric matrix 
*/
#include <stdio.h>

int main() {
	int r,c,i,j;
	int array[i][j] ;
	int transpose[i][j];
	printf("enter row and coloumn no of 2D array");
	scanf("%d %d",&r,&c);
	int arr[r][c] ;
	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   {
           printf("Enter value for array %d %d:", i, j);
             scanf("%d",&array[i][j]);  
           // printf("%d",array[i][j]);
		}// end for j
    }//end for i
    	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   { 
           printf("%d\t",array[i][j]);
	     //if (j<c-1) {
    	//	printf("\n"); }// end if
	   }// for j
	   printf("\n");
   }// end for i
  // for transpose
   	for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)
	   { transpose [i][j]= array [i][j] ;
       }// end for
      printf("\n");
    }// end for
 for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)  {
          	printf("%d\t",transpose[i][j]);
		  } 
		printf("\n");
}
int count =0 ;
for (int i=0; i<r; i++) 
	{
          for(int j=0;j<c;j++)  {
          	if (transpose[j][i]==arr[i][j])
          	{
          		count++ ;
			  }// end if
			  else
			   count=0;
		}// end for
	}// end for
if (count==4)
{ printf("\n your matrix is symmetric");
}
else 
{ printf("\n your matrix is non symmectric");
}
}// end main

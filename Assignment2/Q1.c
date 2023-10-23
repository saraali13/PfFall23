/*
Name:S.Sara Ali
Date:23-10-23
Des:c program to display the statistics for each batsman individually
*/
#include <stdio.h>
int main ()
{
	int i,j,bm,in;
	printf("enter number of batsman\n");
	scanf("%d",&bm);// number of batsmen
	printf("enter number of innings\n");
	scanf("%d",&in);//number of innings
	int arr[bm][in];
	
// input performance// 

	for (i=0;i<bm;i++)
	{   printf("%d batsman\n",i+1);
		for (j=0;j<in;j++)
		{
			printf("performance of %d inning\n",j+1);
			scanf("%d",&arr[i][j]);
		}//end for j(number of innings)
	}// end for i(number of batsmen)
	
//statistics for each batsman //
  
  for (i=0;i<bm;i++)
   {
   	int Trn=0 ,avgperin ,highestperin=0 ,totalcen=0 ,totalhfcen=0 ;
   	printf("\n");
    printf("statistics of %d batsman:\n",i+1);
    for (j=0;j<in;j++)
    {
    	Trn+=arr[i][j]; //total runs
    	if (arr[i][j]>highestperin) //highest run
    	 { highestperin=arr[i][j];
		 }// end if
		if (arr[i][j]>=100) // total number of centuries (run >=100)
		  { totalcen++;
		  }// end if
		else if (arr[i][j]>=50) //total number of half centuries (run>=50)
		  { totalhfcen++;
		  }
	}// end for j
	avgperin=Trn/in; //average number of runs
	printf("Total runs scored=%d\n",Trn);
    printf("Average runs per inning=%d\n",avgperin);
    printf("Highest score in a single inning=%d\n",highestperin);
    printf("Number of centuries=%d\n",totalcen);
    printf("Number of half-centuries\n",totalhfcen);
   }// end for i
  
  return 0;
}// end main

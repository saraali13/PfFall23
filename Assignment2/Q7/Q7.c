/*
Name:S.Sara Ali
Des:sorts the list based on ascending order of age and descendingn order of price
date:29/10/23
*/

#include <stdio.h>

int main() {
    int sn,temp1, temp2;
    printf("Enter the number of shirts\n ");
    scanf("%d", &sn);
    int arr[sn][2];
    for (int i=0;i<sn;i++) 
	 {
        printf("Enter age for shirt %d:",i+1);
        scanf("%d", &arr[i][0]);
        printf("Enter price for shirt %d:",i+1);
        scanf("%d", &arr[i][1]);
     }//end for
    
    printf("original data list:\n");
    for (int i=0;i<sn;i++)
	 {
        printf("(%d, %d)\n",arr[i][0],arr[i][1]);
     }//end for
    //accending order in terms of age
    for (int i=0;i<sn; i++)
	 {
        for (int j=0;j<sn-i;j++)
		 {
            if (arr[j][0]>arr[j+1][0]) 
			{
                temp1=arr[j][0];
                temp2=arr[j][1];
                arr[j][0]=arr[j+1][0];
                arr[j][1]=arr[j+1][1];
                arr[j+1][0]=temp1;
                arr[j+1][1]=temp2;
            }//end if
        }//end for j
    }//end for
    printf("ascending order with respect to Age:\n");
    for (int i = 0; i < sn; i++) {
        printf("(%d, %d)\n", arr[i][0], arr[i][1]);
    }
//decending order in terms of price
    for (int i=0;i<sn;i++) 
	{
        for (int j=0;j<sn-i;j++) 
		{
            if (arr[j][1] < arr[j+1][1]) 
			{
                temp1=arr[j][0];//for age
                temp2=arr[j][1];//for price
                arr[j][0] = arr[j+1][0];
                arr[j][1] = arr[j+1][1];
                arr[j+1][0] = temp1;
                arr[j+1][1] = temp2;
            }//end if
        }//end for j
    }//end for 
    printf("descending order with respect to Price:\n");
    for (int i=0;i<sn;i++) 
	 {
        printf("(%d, %d)\n",arr[i][0],arr[i][1]);
     }//end for

    return 0;
}//end main

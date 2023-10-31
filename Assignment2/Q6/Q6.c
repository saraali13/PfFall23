/***
Name:S.Sara Ali
Description:to find all different number pairs in the array that have sum equal to x
date:29-October-23
*/

#include <stdio.h>

int main() {
    int n,x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements in the array");
    for (int i = 0; i < n; i++) 
	  {
        scanf("%d",&arr[i]);
      }//end for

    printf("Enter the integer sum you want to check for: ");
    scanf("%d", &x);
    int count= 0; 
    for (int i=0;i<n;i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                printf("(%d, %d)  ", arr[i], arr[j]);
                count++;
            }//end if
        }//end for j
    }//end for i
    
    //in case no values correspond to the sum
    if (count == 0)
	 {
        printf("No pairs found with sum %d\n",x);
     }//end if

    return 0;
}//end main

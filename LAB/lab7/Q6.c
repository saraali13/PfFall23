/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: frequency of elements
*/
#include <stdio.h>

int main() {
	int c,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n],fr[n];
    // for elements in an array//
       for(int i=0;i<n;i++)
            {
	      printf("enter %d element\n",i);
	      scanf("%d",&arr[i]);
		  fr[i] = -1;
	    }// end for
    for(int i=0; i<n; i++)
    {
        c= 1;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                fr[j] = 0;
            }// end if
        }// end for

        if(fr[i]!=0)
        {
            fr[i] = c;
        }// end if
    }// end for
    
    // for frequency //
    
    for(int i=0; i<n; i++)
    {
        if(fr[i]!=0)
        {
            printf("frequency of %d is %d\n", arr[i], fr[i]);
        }// end if
    }// end for
}// end main

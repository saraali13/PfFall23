/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: num pattern
*/

#include <stdio.h>

int main() {
    int n ;
    printf("enter a number greater than 0");
    scanf("%d",&n);
    for (int i=0;i<=n;i++)
    {
    	if (i%2==0)
    	{ printf("%d",i);
		}// end if
		else printf(" ");
	//	for (int j=0;j<n;j++)
	//	{
	printf("\t%d\t %d \t",i,i);
			if (i%2==0)
			{
				printf("%d\n",i);
			}// end if
			else printf("\n");
	//	}/// end for
	}// end for 

    return 0;
}//end main

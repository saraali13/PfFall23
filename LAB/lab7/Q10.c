/**
*Name:S.Sara Ali
*Date:14-10-23
*Dec:subarray equal to the sum
*/
#include <stdio.h>
void subarray(int arr[],int n,int s)
{
    int a=0,b=0,sum=0;
    for (int i=0;i<n;i++)
    {
    	sum+=arr[i];
    	while(sum>s)
    	{
    		sum-=arr[a];
    		a++;
		}// end while
		if (sum==s)
		{
			b=i;
			break;
		}// end if
    	//	else if (sum<s)
	   //	{
	  //		sum+=i;
	 //	}// end else if
	}// end for
	if (sum==s)
	 {
	 	printf("The Elements from Index %d to %d when summed results in the output of %d",a+1,b+1,s);
	 }//end if
}//end void
int main() {
	int n,s;
	printf("enter size of the array\n");
	scanf("%d",&n);
	int arr[n];
// for elements of array//
   for(int i=0;i<n;i++)
   {
      printf("enter %d element of array",i+1);
      scanf("%d",&arr[i]);
   }// end for
   printf("enter sum number");
   scanf("%d",&s);
   subarray(arr,n,s);
}// end main

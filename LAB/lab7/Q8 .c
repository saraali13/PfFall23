/***
Name:S.Sara Ali
Date:11-10-23
Des:elements of an array in accending order
***/

    #include <stdio.h>
    int main()
   {
 
        int a, n;
        printf("Enter size of an array \n");
        scanf("%d", &n);
        int arr[n];
        
    // for elements//
    
        for (int i=0;i<n;i++)
        {
        	scanf("%d\n",&arr[i]);
		}// end for1
	
	// for accending order//
	
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (arr[i]>arr[j])
			{
			 a=arr[i];
			 arr[i]=arr[j];
			 arr[j]=a;	
			}// end if
		}// end nested for
	}// end for2
	
	// for output//
	
	printf("Accending order of elements in an array:");
    for (int i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}// end for 
  }// end main

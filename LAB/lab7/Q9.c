/*** 
Name:S.Sara Ali
Date:11-10-23
Des:track of mobile phone bills
***/

    #include <stdio.h>
    int main()
   {
 
        int nb,np;
        printf("enter number of branches and number of phones\n");
        scanf("%d %d",&nb,&np);
        int arr[nb][np];
        
    // for Bill//
    
        for (int i=0;i<nb;i++)
        {
        	for (int j=0;j<np;j++)
        	{
	          printf("enter bill of %d branch and %d phone\n",i+1,j+1);
        	  scanf("%d\n",&arr[i][j]);
            }// end nested for
		}// end for1
		
	// for bill af all branches//
	
	   int tb=0 ;
	   for (int i=0;i<nb;i++)
        {
        	for (int j=0;j<np;j++)
        	{
              tb+= arr[i][j];
            }// end nested for
		}// end for1
		printf("total bill of all braches is: %d\n",tb);
		
	//for bill of each branch//
	int i;
	int be[i] ;
	for (int i=0;i<nb;i++)
        {   
           be[i]=0;
        	for (int j=0;j<np;j++)
        	{
              be[i]+= arr[i][j];
            }// end nested for
        printf ("Bill of %d branch is %d\n",i+1,be[i]);
		}// end for1
		
	// for branch id with max bills//
	int max=be[0] ;
	int maxid=1 ;
	for (int i=0;i<nb;i++)
	{
		if (be[i]>max)
		 {
		 	max=be[i];
		 	maxid=i;
		 }// end if
	}// end for
	printf("branch id with max bills is :%d\n",maxid+1);
	
	// for branch and moblie phones with highest bills//
	
	int highest=arr[0][0] ;
	int hp=1 ,hb=1 ;
	for (int i=0;i<nb;i++)
	{
		for (int j=0;j<np;j++)
		{
			if(arr[i][j]>highest)
			{
				highest=arr[i][j];
				hb=i+1;
				hp=j+1;
			}// end if
		}// end nested for
	}// end for
	printf("%d branch and %d phone are having the highest bill\n",hb,hp);
     
  return 0;   
  }// end main

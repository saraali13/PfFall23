/***
*Name:S.Sara Ali
*Date:24-10-23
Des:to create a function named decideCarUsage that helps users decide whether they should use their car
on a particular day of the weekor not
***/


#include <stdio.h>
void  decideCarUsage(int a,int b)
{
  printf(" the numeric part of their car's number");
  scanf("%d",a);
  printf("the day number of week");
  scanf("%d",b);

   if(a%2==0&&b%2==0||a%2!=0&&b%2!=0)
   	{
		return 1;
  	}//end if
	else 
	 {
		return 0;
   	}//end else
}//end  decideCarUsage

int main()
{
	int x,y;
	int check;
	check=decideCarUsage(x,y);
	if(check==1)
	{
		printf("\nThe car should be used ");
	}// end if
	else
	{
		printf("\nThe car should not be used ");
	}//end else
}//end main	

/***
*Name:S.Sara Ali
*Date:25-10-23
*Des:to create a function named calculateDiscount which returns discount amount
***/

#include <stdio.h>
void calculateDiscount (int nv,int pa,int a)
{   int da,sale;
	if (nv>=10 && pa>=50)
	 {
	 	printf("amount of discount=15% \n");
	 	sale=15;
	 	da=a*sale/100;
	 	printf("Discount amount=%d",da);
	 }// end if
	else if (nv>=5 && pa>=30)
	{
	     printf("amount of discount=10% \n");
	     sale=10;
	 	 da=a*sale/100;
	 	 printf("Discount amount=%d",da);
    }
	else 
	{
		printf("no discount\n");
		da=a;
		printf("Discount amount=%d",da);
	}
}// end calculateDiscount
int main ()
{   int pa,nv,a;
    printf("enter Amount");
    scanf("%d",&a);
	printf("enter the customer's total purchase amount and the number of visits in the past month");
	scanf("%d %d",&pa,&nv);
	calculateDiscount (nv,pa,a);	
}// end main

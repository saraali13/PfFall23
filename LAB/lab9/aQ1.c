/***
*Name:S.Sara Ali
*Date:31-october-23
*Des:swap j and k by modifiying the given code and to identify the error in the given code
***/

//provided code

/*#include <stdio.h>
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=a;
}//end void
int main()
{
	int j=2,k=5;
	printf("j=%d,k=%d\n",j,k);
	swap(j,k);
	printf("j=%d,k=%d\n",j,k);
	retuen 0;
}//end main*/

#include <stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}//end void
int main()
{
	int j=2,k=5;
	printf("j=%d,k=%d\n",j,k);
	swap(&j,&k);
	printf("j=%d,k=%d\n",j,k);
	return 0;
//A. the provoided code did not work as invalid value was assigned to b and actual paramerters were not changed so we had to pass the adress
}//end main

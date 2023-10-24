/**Name:S.Sara Ali
*Date:24-10-23
*Des:A user defined function which swapa two integers 
***/
#include <stdio.h>
void swap(int a,int b)
{
	printf("enter two integers\n");
	scanf("%d %d",&a,&b);
	int x;
	x=a;
	a=b;
	b=x;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}// end swap
int main ()
{   
    int a,b;
	swap(a,b);
}//end main

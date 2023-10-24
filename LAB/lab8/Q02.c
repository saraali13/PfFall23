/***
*Name:S.Sara Ali
*Date:24-10-23
*Des:to create a user defined function to perform basic arithmetic
operations 
***/
#include <stdio.h>

void calculator(int n1, int n2, char op){
    float ans;
    //char op;
    printf("enter first number\n");
    scanf("%d",&n1);
    printf("enter second number\n");
    scanf("%d",&n2);
    printf("choose the operator");
    scanf(" %c" , &op);
    switch (op)
    {
        case '+':
         //ans=n1+n2;
		 printf("ans=%d",n1+n2);
         break;
        case '-':
         printf("ans=%d",n1-n2);
         break;
       case '*':
         printf("ans=%d",n1*n2);
         break;
       case '/':
		 printf("ans=%d",n1/n2);
         break;
     default:
        printf("error");
      
    }// end switch
}// end calculator
int main()
{
	int n1,n2,ans;
	char op;
	calculator(n1,n2,op);
}// end main

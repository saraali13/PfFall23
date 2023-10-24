#include <stdio.h>

int main(){
    int n1;
    int n2;
    int ans;
    char op;
    printf("enter first number\n");
    scanf("%d",&n1);
    printf("enter second number\n");
    scanf("%d",&n2);
    printf("choose the operator");
    scanf("%c",&op);
    switch (op)
    {
        case '+':
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
        break;
    }// end switch
    return 1;
}// end main
    
    


    
    


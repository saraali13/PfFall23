/***
*Name:S.Sara Ali
*Date:24-10-23
Des:to find the occurence of a letter on a string text
***/


#include <stdio.h>
#include <string.h>
int main()
{
	int n,count=0;
	char ch;
//	printf("enter size of array\n");
//	scanf("%d",&n);
	char arr[100];
	printf("Enter the text\n");
   scanf("%[^\]s",arr);
//   gets(arr);
   printf("enter the letter you want to check\n");
   scanf(" %c",&ch);
  for (int i=0;arr[i] !='\0';i++)
   {
   	if (arr[i]==ch)
    	count++;
  }// end for
   printf("the occurence of the entered character is :%d",count);
}// end main
    

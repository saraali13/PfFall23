/***
Name:S.Sara Ali
Description:swap 2 variables using bitwise XOR operator for different data types
Date:19/11/23
***/


#include <stdio.h>

void swap(void *p1, void *p2,int size) 
{
    unsigned char *Ptr1 = (unsigned char *)p1;
    unsigned char *Ptr2 = (unsigned char *)p2;
  //  for (size_t i=0;i<size--;i++)//not working for integer
  while (size--)
    {
        *Ptr1 = *Ptr1 ^ *Ptr2;
        *Ptr2 = *Ptr1 ^ *Ptr2;
        *Ptr1 = *Ptr1 ^ *Ptr2;
        Ptr1++;
        Ptr2++;
    }//end for
}//end void

int main() {
    int a, b;
    printf("Enter the two integers");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);
    char c,d;
    printf("Enter two characters");
    scanf(" %c %c",&c,&d); 
    printf("Before swapping: c= %c d= %c\n",c,d);
    swap(&c,&d, sizeof(char));
    printf("After swapping: c= %c d= %c\n",c,d);

    return 0;
}//end main

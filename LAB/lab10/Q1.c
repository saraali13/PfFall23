/***

***/

#include <stdio.h>
void printarray(void *arr,int size, char type)
{
	int datatype;
	switch (type)
	{
		case 'i':
			for (int i=0;i<size;i++)
			 printf("%d, ",((int*)arr)[i]);
		break;
		case 'c':
			for (int i=0;i<size;i++)
			 printf("%c, ",((char*)arr)[i]);
		break;
		case 'f':
			for (int i=0;i<size;i++)
			 printf("%f, ",((float*)arr)[i]);
		 break;
		default:
			break;
	}// end switch
}// end void
int main()
{   char i,c,f ;
	int arr[10]={0};
	char crr[10]={'a','b','c','d','e','f','g','h','i','j'};
	float frr[10]={0};
	printarray(arr,10, 'i');
	printarray(crr,10, 'c');
	printarray(frr,10, 'f');
return 1;
}// end main

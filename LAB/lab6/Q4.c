#include <stdio.h>

int main (){
int a ,b ,lcm ,hcd,y, z, p=1, x;
printf("enter two numbers between 0 amd 9");
scanf("%d %d", &a ,&b);
for (i=a;i<=b;i++)
{
	switch (i)
	case 0:
		printf("zero");
			case 1:
		printf("one");
			case 2:
		printf("two");
			case 3:
		printf("three");
			case 4:
		printf("four");
			case 5:
		printf("five");
			case 6:
		printf("six");
			case 7:
		printf("seven");
			case 8:
		printf("eight");
			case 9:
		printf("nine");
		default;
		if (i%2==0)
		printf("even");
		else 
		printf("odd");
}// end for
	

return 1;
}// end main

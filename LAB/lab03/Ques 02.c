Ques no 2:

#include <stdio.h>

int main() 
{
            int hypotenuse;
            int base;
            int perpendicular;
            printf("inputs for hypotenuse of a right triangle");
            printf("Enter base:");
            scanf("%d",&base);
            printf("Enter perpendicular:");
            scanf("%d",&perpendicular);
            printf("hypotenuse of right triangle");
            hypotenuse = sqrt(base*base+perpendicular*perpendicular);
            printf("hypotenuse is: %d" ,hypotenuse);
            return 1;
}// end main

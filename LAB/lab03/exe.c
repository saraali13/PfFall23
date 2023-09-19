# EX 1:
int main() 
{
            int volume;
            int length =0;
            int height =0;
            int width =0;
            printf("inputs for volume of the container");
            printf("Enter length:");
            scanf("%d",&length);
            printf("Enter height:");
            scanf("%d",&height);
            printf("Enter width:");
            scanf("%d",&width);
            printf("volume of the container");
            volume = length*height*width;
            printf("volume is: %d" ,volume);
            return 1;
}// end main
# EX 2:
#include <stdio.h>
int main() 
{
            int hypotenuse;
            int base=0;
            int perpendicular=0;
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
# EX 3:
#include <stdio.h>
int main() 
{
            int south1;
            int south2=0;
            int north=0;
            int west=0;
            printf("inputs for total distance and fuel consumption");
            printf("Enter south1:");
            scanf("%d",&south1);
            printf("Enter south2:");
            scanf("%d",&south2);
            scanf("%d",&north);
            printf("Enter west:");
            printf("Enter north:");
            scanf("%d",&west);
            printf("total distance");
            int totaldistance = south1+south2+north+west;
            printf("totaldistance is: %d" ,totaldistance);
            printf("Fuel consumption");
            int fuelconsumption = 2*totaldistance;
            printf("fuel consumption is:%d" ,fuelconsumption);
            return 1;
}// end main
# EX: 4
#include <stdio.h>
int main()
{
       int firstnumber = 0;
       int secondnumber = 0;
       int operator =0;
       int operation;
       printf("inputs for performing operation:");
       printf("first number:");
       scanf("%d" ,&firstnumber);
       printf("second number:");
       scanf("%d" ,&secondnumber);
       printf("operator:");
       scanf("%d" ,&operator);
       if (operator == +);
       operation = firstnumber + secondnumber;
             printf("operation is:%d\n",operation);
       if (operator == -);
       operation = firstnumber - secondnumber;
             printf("operation is:%d\n",operation);
       if (operator == *);
       operation = firstnumber * secondnumber;
             printf("operation is:%d\n",operation);
       if (operator == /);
       operation = firstnumber / secondnumber;
             printf("operation is:%d\n",operation);
        else
             printf("error");
       return 1;
}//end main
# EX: 5
#include <stdio.h>
int main()
{
       int orignal price = 0;
       int sale = 0;
       printf("inputs for sale price:");
       printf("orignal price:");
       scanf("%d" ,&orignal price);
       printf("sale:");
       scanf("%d" ,&sale);
       int sale price =sale/100;
       printf("sale price:");
       int price = sale price * orignal price;
       printf("price":);
       return 1;
}//end main

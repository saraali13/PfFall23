/***
*Name:S.Sara Ali
*Des: A program for a airport system to check for flight availabilty and ticket prices with 4 main functionalities
*Date: 26-october-23
***/

#include <stdio.h>

int main() {
    int mr[5][2] = {
        {1, 300},
        {1, 320},
        {0, 0},
        {1, 380},
        {1, 375}  };//morning flight availability and ticket prices
    int ev[5][2] = {
        {0, 0},
        {1, 310},
        {1, 280},
        {0, 0},
        {1, 400}  };//evening flight availability and ticket prices
    int op, min, day,dn;
    int availableDaysMr = 0;
    int availableDaysEv = 0;
    char t1[] = "morning";
    char t2[] = "evening";

    printf("Enter your choice (1-4):\n");
    printf("1. most convenient day and time slot\n");
    printf("2. the best morning flight options\n");
    printf("3. the best evening flight options\n");
    printf("4. Check availability and price for a specific day\n");
    scanf("%d", &op);

    switch (op) {
        case 1://most most convenient day and time
            for (int i=0;i<5;i++) {
            	for (int j=0;j<2;j++)
            	{
                if (mr[i][j] == 1) {
                    availableDaysMr++;
                }//end if
                if (ev[i][j] == 1) {
                    availableDaysEv++;
                }//end if
            }//end j
            }//end for
            if (availableDaysMr> availableDaysEv) 
			{
                min = mr[0][1];
                day = 1;
                for ( int i=0;i<5;i++) {
                	for (int j=0;j<2;j++)
                	{
                    if (mr[i][j] < min && mr[i][j] == 1) {
                        min = mr[i][j];
                        day = i + 1;
                    }//end if
                   }//end j
                }//end for
                printf("The preferred day and time is %d , %s\n", day, t1);
            } //end if
	      else {
                min = ev[0][1];
                day = 1;
                for ( int i=0;i<5;i++) {
                	for (int j=0;j<2;j++)
                	{
                    if (ev[i][j] < min && ev[i][j] == 1) {
                        min = ev[i][j];
                        day = i + 1;
                    }//end if
                  }//end j
                }//end for
                printf("The preferred day and time is %d , %s\n", day, t2);
            }//end else
            break;

        case 2:// flights in the morning
            min = mr[0][1];
            day = 1;
            for ( int i=0;i<5;i++) {
            	for (int j=0;j<2;j++)
            	{
                if (mr[i][j] == 1) {
                    printf("morning flight is available on the day %d\n", i + 1);
                    if (mr[i][j] < min) {
                        min = mr[i][j];
                        day = i + 1;
                    }//end if
                }//end if
             }//end j
            }//end for
            printf("the day preferred on basis of price %d\n", day);
            break;

        case 3://flight in the evening
            min = ev[0][1];
            day = 1;
            for ( int i=0;i<5;i++) {
            	for (int j=0;j<2;j++)
            	{
                if (ev[i][j] == 1) {
                    printf("evening flight is available on the day is %d\n", i + 1);
                    if (ev[i][1] < min) {
                        min = ev[i][j];
                        day = i + 1;
                    }//end if
                }//end if
              }//end j
            }//end for
            printf("the day preferred on basis of price is %d\n", day);
            break;

        case 4://finds out flight availability for any day selected 
            printf("The days are represented by 1-5(mon to fri)\n");
            printf("Enter the day number");
            scanf("%d",& dn);
            int x=dn;
            if (mr[x][0] == 1) {
                printf("The morning flight is available and the price is %d\n", mr[x][1]);
            }//end if
            else {
                printf("The morning flight is NOT available\n");
            }//end else
            if (ev[x][0] == 1) {
                printf("The evening flight is available and the price is %d\n", ev[x][1]);
            }//en if
	    else {
                printf("The evening flight is NOT available\n");
            }//end else
            break;

        defailt:
            printf("Invalid option input\n");
    }//end switch

    return 0;
}//end main

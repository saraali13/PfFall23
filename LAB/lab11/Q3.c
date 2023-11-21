/***
*name:S.Sara Ali
*date:21-11-23
***/
#include <stdio.h>
#include <string.h>
struct date{
	int day;
	int month;
    int year;
};
int compdate(struct date date1,struct date date2) {
   if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year) {
        return 1;
    }// end if
	else {
        return 0; 
    }// end else
}// end void

int main() {
    struct date date1, date2;

    printf("Enter first date");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    if (compdate(date1, date2)) {
        printf("Dates are equal\n");
    }//end if
	 else {
        printf("Dates are not equal\n");
    }//end else

    return 0;
}// end main

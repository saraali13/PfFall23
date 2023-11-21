/***
*date: 11/21/2023
*name:S.Sara Ali
***/
#include <stdio.h>
#include <time.h>
struct Date {
    int day;
    int month;
    int year;
};
void addDays(struct Date *date, int daysToAdd) {
    // Convert the date to time_t
    struct tm timeStruct = {
        .tm_mday = date->day,
        .tm_mon = date->month - 1,  
        .tm_year = date->year - 1900 
    };
    time_t t = mktime(&timeStruct);
    t += daysToAdd * 24 * 60 * 60;
    struct tm *resultTime = localtime(&t);
    
    date->day = resultTime->tm_mday;
    date->month = resultTime->tm_mon + 1; 
    date->year = resultTime->tm_year + 1900; 
}

int main() {
    time_t currentTime = time(NULL);
    struct tm *localTime = localtime(&currentTime);
    struct Date currentDate = {
        .day = localTime->tm_mday,
        .month = localTime->tm_mon + 1,  
        .year = localTime->tm_year + 1900 
    };
    printf("Current Date: %02d-%02d-%d\n", currentDate.day, currentDate.month, currentDate.year);
    addDays(&currentDate, 45);
    printf("Final Date after adding 45 days: %02d-%02d-%d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}

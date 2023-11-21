/***
*name:S.ara Ali
*date:21-11-23
***/


#include <stdio.h>
#define MAX_STUDENTS 450//max students=450

struct Student {
    int rollNum;
    char name[50];
    char classs[50];
    int joiningyear;
};

void StudentsByYear(struct Student stud[], int numS, int Year) {
    printf("Students who joined in %d:\n",Year);
    for (int i = 0; i < numS; ++i) {
        if (stud[i].joiningyear == Year) {
            printf("%s\n", stud[i].name);
        }//end if
    }//end for
    printf("\n");
}//end void

void StudentByRollNumber(struct Student stud[], int numS, int RollNumber) {
    for (int i = 0; i < numS; ++i) {
        if (stud[i].rollNum == RollNumber) {
            printf("Student Data for Roll Number %d:\n", RollNumber);
            printf("Name: %s\n", stud[i].name);
            printf("Class: %s\n", stud[i].classs);
            printf("Year of Joining: %d\n", stud[i].joiningyear);
            return;
        }//end if
    }//end for
    printf("Student with Roll Number %d not found.\n\n", RollNumber);
}//end void 

int main() {
    struct Student stud[MAX_STUDENTS] = {
        {10, "ben", "1A", 2022},
        {28, "sam", "2A", 2021},
        {23,"mary","1A",2021},
        {12,"john","2A",2023},
    };

    int numS =4 ;
    StudentsByYear(stud,numS, 2021);
    StudentByRollNumber(stud,numS, 10);
    return 0;
}//end main

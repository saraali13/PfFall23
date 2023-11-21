/***
*name:S.Sara Ali
*date:21-11-23
***/
#include <stdio.h>
#include <string.h>
struct Engineparts{
    char number[4]; 
    int year;
    char material[20];
    int quantity;
};
void retrieveparts(struct Engineparts p[], int numP) {
    printf("Parts information between BB1 and CC6:\n");
    int i;
    for (i = 0; i < numP; i++) {

        if (strcmp(p[i].number, "BB1") >= 0 && strcmp(p[i].number, "CC6") <= 0) {
            printf("Serial Number: %s\n", p[i].number);
            printf("Year of Manufacture: %d\n", p[i].year);
            printf("Material: %s\n", p[i].material);
            printf("Quantity Manufactured: %d\n", p[i].quantity);
            printf("\n");
        }//end if
    }// end for
}// end void

int main() {
    struct Engineparts engineP[10];

    strcpy(engineP[0].number, "AA0");
    engineP[0].year = 2022;
    strcpy(engineP[0].material, "Steel");
    engineP[0].quantity = 50;

    strcpy(engineP[1].number, "BB5");
    engineP[1].year= 2023;
    strcpy(engineP[1].material, "Aluminum");
    engineP[1].quantity = 30;

    strcpy(engineP[2].number, "CC3");
    engineP[2].year = 2021;
    strcpy(engineP[2].material, "Titanium");
    engineP[2].quantity= 20;

    retrieveparts(engineP, 3);

    return 0;
}//end main

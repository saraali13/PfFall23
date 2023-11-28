/**
*Name:S.Sara Ali
*ID:23K-0070
**/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr = fopen("file8.csv", "r");

    if (fptr == NULL) {
        printf("error\n");
        return 1;
    }// end if

    char line[20];
    char *token;
    int rows = 0, cols = 0;
    char *header = NULL;

    // for Reading header
    if (fgets(line, sizeof(line), fptr) != NULL) {
        header = strdup(line);
        rows++;
        token = strtok(line, ",");
        while (token != NULL) {
            cols++;
            token = strtok(NULL, ",");
        }// end while
    }// end if

    //for counting rows and columns
    while (fgets(line, sizeof(line), fptr) != NULL) {
        rows++;
    }
    //for Displaying total rows and columns
    printf("Total rows: %d\n", rows);
    printf("Total columns: %d\n\n", cols);
    // Display header followed by a blank line
    printf("%s\n\n", header);
    // for Reseting the file pointer to beginning
    fseek(fptr, 0, SEEK_SET);
    // for Skiping the header
    fgets(line, sizeof(line), fptr);
    while (fgets(line, sizeof(line), fptr) != NULL) {
        char *data = strtok(line, ",");
        printf("| %s", data);
        while ((data = strtok(NULL, ",")) != NULL) {
            printf("\t| %s", data);
        }// end while
        printf("\t|\n");
    }// end while main
    fclose(fptr);

    return 0;
}// end main

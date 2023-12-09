/*
Name:S. Sara Ali
ID:23k-0070
Description: merges records of same employes from 2 different info files into a new file
*/


#include <stdio.h>
#include <stdlib.h>

void MergeAndWrite(int id) {
    FILE *fptr1 = fopen("personal.txt", "r");//personal.txt file containing ID and name
	if (fptr1 == NULL) //checking if file exist or not
	{
        printf("Error opening personal.txt");
        exit(EXIT_FAILURE);
    }//end if
    FILE *fptr2 = fopen("department.txt", "r");//department.txt file containig ID and salary
	if (fptr2 == NULL) //checking if file exist or not
	{
        printf("Error opening department.txt");
        fclose(fptr1); //closing the file
        exit(EXIT_FAILURE);
    }// end if
    FILE *fptr3 = fopen("combine.txt", "a");//combine.txt file containing content of other two files
	if (fptr3 == NULL) //checking if file exist or not
	{
        printf("Error opening Combine.txt");
		fclose(fptr1);
        fclose(fptr2);
        exit(EXIT_FAILURE);
    }//end if
    int personalId, departmentId, salary;
    char name[50];
    while (fscanf(fptr1, "%d,%s", &personalId, name) == 2)//2 arguments one is id and other one is name
	   {
		if (personalId == id) {
            fseek(fptr2, 0, SEEK_SET);

            while (fscanf(fptr2, "%d,%d", &departmentId, &salary) == 2) 
			{
                if (departmentId == id) 
				{
                    fprintf(fptr3, "%d,%s,%d\n", id, name, salary);
                    printf("Record of ID %d is merged and written\n", id);
                    break;
                }//end if
            }//end while
            break;
        }// end if
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);
}//end MergerAndWrite

int main() {
    int id;
    printf("**S.Sara Ali**\n**23k-0070**\n\n");
    printf("Enter the ID:\n");
    scanf("%d", &id);
    MergeAndWrite(id);

    return 0;
}// end main

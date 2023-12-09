/***
Name:S. Sara Ali
ID:23k-0070
Description:A program to create a database of employee records with performance
            based ratings calculted randomly and calculating the best performing department
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[20];
    char role[20];
    int communication;
    int teamwork;
    int creativity;
};
struct Department {
    char name[20];
    struct Employee employees[5]; 
	int totalCommunication;
    int totalTeamwork;
    int totalCreativity;
};
char* generateRandomName(char pool[][20], int poolSize) {
    return pool[rand() % poolSize];
}

// -> is used as there are pointers to the structures
// Function to initialize a department with employees and their attributes
void initializeDepartment(struct Department *department, char name[], char rolePool[][20], int rolePoolSize) {
    strcpy(department->name, name); //copies the department name to the department attribute in the employee struct
    //initializing all numerical attributes to zero
	department->totalCommunication = 0;
    department->totalTeamwork = 0;
    department->totalCreativity = 0;

    int i;
    for (i = 0; i < 5; i++) {
        // Generate a unique name for each employee
        do {
            strcpy(department->employees[i].name, generateRandomName(rolePool, rolePoolSize)/*storing a random generated name to name attribute in emplyee struct which is in department struct*/);
        } while (strstr((const char*)/*typecasting done due to requirement of strstr function*/department->employees[i].name, "Assigned"));
        //the above strstr function is checking for the "Assigned" substring with the name to ensure name hasnt already been alloted.
        
        
        int roleIndex;
        do {
            roleIndex = rand() % rolePoolSize;
        } while (strstr((const char *)department->employees, rolePool[roleIndex]));
        
        // Assign a role from the pool
        strcpy(department->employees[i].role, rolePool[i]);

        // Assign random values between 1 and 100 for communication, teamwork, and creativity
        department->employees[i].communication = rand() % 100 + 1;
        department->employees[i].teamwork = rand() % 100 + 1;
        department->employees[i].creativity = rand() % 100 + 1;

        // Update the total values for the department
        department->totalCommunication += department->employees[i].communication;
        department->totalTeamwork += department->employees[i].teamwork;
        department->totalCreativity += department->employees[i].creativity;
    }
}

// Function to print the details of a department
void printDepartmentDetails(struct Department *department) {
	//used dashes and | to design a table like structure
	//%s and %d are used to allot it numeric column space
    printf("| %-10s | %-10s | %-12s | %-8s | %-8s | %-9s |\n", "Department", "Role", "Name", "Communication", "Teamwork", "Creativity");
    printf("|------------|------------|--------------|---------------|----------|------------|\n");

    int i;
    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-10s | %-12s | %-13d | %-8d | %-10d |\n",
               //printing all the relevant data in the table
			   department->name,
               department->employees[i].role,
               department->employees[i].name,
               department->employees[i].communication,
               department->employees[i].teamwork,
               department->employees[i].creativity);
    }

    printf("|------------|------------|--------------|---------------|----------|------------|\n");
}

int main() {
	
	printf("**S.Sara Ali**\n**23K-0070**\n\n");


    // Pool of names for random assignment
    char namePool[][20] = {"Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Hank", "Ivy", "Jack",
                           "Katie", "Liam", "Mia", "Noah", "Olivia", "Peter", "Quinn", "Rachel", "Sam", "Tom"};

    // Pool of roles
    char rolePool[][20] = {"Director", "Executive", "Manager", "Employee", "Trainee"};

    // calculating num of elements in the role pool 
    int rolePoolSize = sizeof(rolePool) / sizeof(rolePool[0]);

    // Initialize departments with unique names
    struct Department departments[4];
    char departmentNames[][20] = {"HR", "Finance", "Marketing", "Logistics"};

    int i;
    for (i = 0; i < 4; i++) {
        initializeDepartment(&departments[i], departmentNames[i], rolePool, rolePoolSize);
    }

    // Print department details
    for (i = 0; i < 4; i++) {
        printf("Details for %s Department:\n", departments[i].name);
        printDepartmentDetails(&departments[i]);//giving the address as the function is getting a pointer to this struct as a argument
        printf("\n");
    }

    // Determine the Best Department
    int bestDepartmentIndex = 0;
    //calculating total value for the first department as the initializing value for this variable
    int maxTotalValues = departments[0].totalCommunication + departments[0].totalTeamwork + departments[0].totalCreativity;

    for (i = 1; i < 4; i++) {
    	//calculating total sum of all numerical attributes for all departments
        int currentTotalValues = departments[i].totalCommunication + departments[i].totalTeamwork + departments[i].totalCreativity;

        if (currentTotalValues > maxTotalValues) {
            maxTotalValues = currentTotalValues;
            bestDepartmentIndex = i;
        }
    }

    // Print the Best Department and its details
    printf("Best Department Award goes to: %s Department\n", departments[bestDepartmentIndex].name);
    printf("Total Communication: %d\n", departments[bestDepartmentIndex].totalCommunication);
    printf("Total Teamwork: %d\n", departments[bestDepartmentIndex].totalTeamwork);
    printf("Total Creativity: %d\n", departments[bestDepartmentIndex].totalCreativity);

    // Print the sum of values for each department separately
    printf("\nSum of values for each department separately:\n");
    for (i = 0; i < 4; i++) {
        printf("%s Department - Communication: %d, Teamwork: %d, Creativity: %d\n",
               departments[i].name,
               departments[i].totalCommunication,
               departments[i].totalTeamwork,
               departments[i].totalCreativity); 
    }

    return 0;
}

/***
Name:S.Sara Ali
Description: a program that calculates the persistence number of an integer and keeps doing that until EOF is entered by user to exit the program
date:29-october-23
***/

#include <stdio.h>
#include <string.h>
int Persistence(int n) 
  {
    int persistence = 0;  
    while (n >= 10) 
	{
        int product =1;
        while (n > 0) 
		{
            product *= n % 10;
            n /= 10;
        }//end while
        n = product;
        persistence++;
    }//end while
    return persistence;
}//end persistence

int main() {
    int n;
    int result;
    char arr[100];

    while (1) {
        printf("Enter an integer or type 'EOF' to exit: ");
        
        if (fgets(input,sizeof(input),stdin)!= NULL) 
		{
            size_t len = strlen(input);
            if (input[len - 1] == '\n') 
			{
                input[len - 1] = '\0';
            }//end nested if 1
            if (strcmp(input, "EOF") == 0) 
			{
                printf("Exiting the program\n");
                break;
            }//end nested if 2

            result = sscanf(input, "%d", &num);

            if (result != 1) 
			{
                printf("Invalid input. Please enter a valid integer.\n");
                continue;
            }//end nested if 3
            
            int persistence = Persistence(num);
            printf("Persistence of %d is: %d\n", num, persistence);
        }//end if 
		else 
		 {
            printf("Error reading input\n");
            break;
         }//end else
    }//end while

    return 0;
}//end main

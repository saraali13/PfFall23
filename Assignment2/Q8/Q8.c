/***
*Name:SSara Ali
*Des:calculates the persistence number of an integer and keeps doing that until EOF is entered
*Date:29-october-23
***/

#include <stdio.h>
#include <string.h>
int Persistence(int n) 
{
    int persistence = 0;
    while (n >= 10) 
	{
        int product = 1;
        while (n > 0)
		{
            product *= n % 10;
            n /= 10;
        }//end while
        n = product;
        persistence++;
    }//end while

    return persistence;
}//end Persistence

int main() {
    int n;
    int result;
    char arr[100];  // Assuming a maximum input length of 99 characters

    while (1) {
        printf("Enter an integer or type 'EOF' to exit: ");
        
        if (fgets(arr,sizeof(arr), stdin)!=NULL) 
		{
            size_t l=strlen(arr);
            if (arr[l-1]=='\n') 
			{
                arr[l-1]='\0';
            }//end nested if 1
            if (strcmp(arr,"EOF")==0) 
			{
                break;
            }//end nested if 2

          result=sscanf(arr,"%d",&n);
            int persistence = Persistence(n);
            printf("Persistence of %d is %d\n",n,persistence);
        }//end if 
    }//end while

    return 0;
}// end main

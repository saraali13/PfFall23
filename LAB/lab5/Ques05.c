#include <stdio.h>

int main(){
      char c1;
      printf("input a character\n");
      scanf("%c",&c1);
      if ((c1>='a')&&(c1<='z'))
      { printf("character is a small letter");
      }// end if
      else if ((c1>='A')&&(c1<='Z'))
      { printf("character is a capital letter");
      }// end else if
      else if ((c1>='0')&&(c1<='9'))
      { printf("character is a digit");
      }// end else if  
      else 
        { printf("special character");
        }//end if
}// end main

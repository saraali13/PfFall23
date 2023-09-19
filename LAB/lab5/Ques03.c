#include <stdio.h>

int main(){
 char a;
 printf("Are you sure you want to delete it [Y/y]/[N/n}");
 scanf("%c",&a);
 switch('a')
 {
  case 'Y' :
     ptintf("Delete successfully");
     break;
  case 'y' :
     ptintf("Delete successfully");
     break;
  case 'N':
     printf("Delete cancled"); 
     break;
  case 'n':
     printf("Delete cancled");
     break;
  default:
    printf("invalid input");
} // end switch
}// end main

/* 
Name:Syeda Sara Ali
Date: 3-oct-2023 
Description: match stick game
*/
#include <stdio.h>

int main() {
	
    int m=21,c,u;
while (m>1)
{
    printf("choose number of match sticks(1,2,3,4)");
    scanf("%d",&u);   
   //itch(u){
	if (u==1)
	{
	    c=4; }
    //reak;
	else if (u==2){
	    c=3; }
    else if(u==3){
	    c=2; }
    else if (u==4) {
	    c=1;  }
    else 
	    printf("error");
	m= m-u-c;
	printf("number of sticks= %d\n",m);

}// end while
 printf("You lost");
    return 1;
}//end main

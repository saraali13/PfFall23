/***
Name:S.Sara Ali
Des:to traverse a 5x5 maze and return coordinates for the path from start to end
Date:29-october-23
***/
#include<stdio.h>
#include<stdlib.h>
main() {
	int N=5,K=5,i,j;
	char maze[5][5]={
	{'S','O','O','W','W'},
	{'O','W','O','W','W'},
	{'W','O','O','W','O'},
	{'W','W','O','W','O'},
	{'W','W','O','E','W'},
	};
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			printf("%c,",maze[i][j]);
		}//end for j 
		printf("\n");
	}//end for i

	int path[25],path2[25],count=0;
	for(i=0;i<5;i++) 
	{
		for(j=0;j<5;j++) 
		{
			if(maze[i][j]=='S') 
			{
				path[0]=i;
				path2[0]=j;
			}//end if
			if(maze[i][j]=='O'&& (maze[i+1][j]=='O'||maze[i][j+1]=='O'|| maze[i+1][j]=='E'||maze[i][j+1]=='E')&&
			(maze[i-1][j]=='O'||maze[i][j-1]=='O'||maze[i-1][j]=='S'||maze[i][j-1]=='S') )
			{
				count=count+1;
				path[count]=i;
				path2[count]=j;
				
			}//end if
			if(maze[i][j]=='E') 
			{
				count=count+1;
				path[count]=i;
				path2[count]=j;
			}//end if
		}//end for j
	}//end for i
	printf("path to exit");
	for(i=0;i<=count;i++) 
	{
		printf("(%d,%d)",path[i],path2[i]);
	}//end for i
}//end main

/* Floyd's Triangle
    1 
	2 3 
    4 5 6
    7 8 9 10   */   
#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);  
	
	int i, j, k = 1; 
	for(i=1; i<=rows; i++)  //i: row number
	{
		for(j=1; j<=i; j++)  //j:column number
		{
			printf("%d ",k);  //k:number to be printed
			++k;  //or use k++;
		}
		printf("\n");
	}
	return 0;
}

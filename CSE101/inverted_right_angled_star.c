/*   * * * *  
     * * *
     * * 
     *        */

#include<stdio.h>
int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	int i, j;
	for(i=rows; i>=1; i--)  //i: row number
	{
		for(j=1; j<=i; j++) //j: column number
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


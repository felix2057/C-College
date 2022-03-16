// This program is correct but for some reason not working on VS Code 
//so i made the same program with different inputs ahead
#include<stdio.h>  
int main() 
{
    int total_rows_no,row,space,symbol;
    printf("Enter the number of rows\n");
    scanf("%d", &total_rows_no);
    for (row = 1; row<=total_rows_no; row++)
    {
    for (space =1; space <= (total_rows_no-row); space++)
      printf(" ");
    for (symbol =1; symbol <=((2*row)-1); symbol++)
      printf("$");

    printf("\n");  
    }
    return 0;
}
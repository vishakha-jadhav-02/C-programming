/*
Accept row and column count from user and display pattern
Input: Row: 4    Col: 4
Output:
    A
    A   B
    A   B   C
    A   B   C   D
*/

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integers
// Output:          None
// Description:     Display pattern
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch='\0';

    for(i = 1; i <= iRow; i++, j++)
    {
        for(j = 1, ch= 'A'; j <= i; j++, ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of columns: ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

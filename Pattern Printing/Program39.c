/*
Accept row and column count from user and display pattern
Input: Row: 6    Col: 6
Output:
    *   a   a   a   a   a
    b   *   b   b   b   b
    c   c   *   c   c   c
    d   d   d   *   d   d
    e   e   e   e   *   e
    f   f   f   f   f   *
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
    if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1, ch='a'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("%c\t",ch);
            }
            
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

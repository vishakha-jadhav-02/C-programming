/*
Accept row and column count from user and display pattern
Input: Row: 6    Col: 6
Output:
    *   $   $   $   $   $
    $   *               $
    $       *           $
    $           *       $
    $               *   $
    $   $   $   $   $   *
*/

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          None
// Description:     Display pattern
// Author:          Vishakha Krishnarao Jadhav
// Date:            02/08/23
//
////////////////////////////////////////////////////
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("*\t");
            }
            if((i == 1) || (i == iRow) || (j ==1) || (j == iCol))
            {
                printf("$\t");
            }
            else
            {
                printf(" \t");
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

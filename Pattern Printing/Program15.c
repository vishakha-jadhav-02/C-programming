/*
Accept row and column count from user and display pattern
 Input: Row:3   col:5
 Output: 
    1   1   1   1   1
    2   2   2   2   2
    3   3   3   3   3  
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

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",i);
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

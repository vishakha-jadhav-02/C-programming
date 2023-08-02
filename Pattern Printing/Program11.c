// Accept number and display below pattern
// Input: 5
// Output: 1    2   3   4   5   4   3   2   1 

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
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = iNo-1; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol: ");
    scanf("%d", &iFrequency);

    Display(iFrequency);

    return 0;
}
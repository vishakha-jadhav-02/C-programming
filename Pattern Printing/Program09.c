// Accept number and display table of 2 till that number
// Input: 7
// Output: 2    4   6   8   10  12  14

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          None
// Description:     Display table till input number
// Author:          Vishakha Krishnarao Jadhav
// Date:            02/08/23
//
////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);
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

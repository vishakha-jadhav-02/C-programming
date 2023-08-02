// Accept number from user and print that number of capitalcase alphabets.
// Input: 3
// Output: A  B  C

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          None
// Description:     Display capitalcase alphabets
// Author:          Vishakha Krishnarao Jadhav
// Date:            02/08/23
//
////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t", ch);
        ch++;
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

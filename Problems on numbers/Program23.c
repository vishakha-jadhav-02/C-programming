// Accept number from user and display it's digits in reverse order

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   DisplayDigits
// Input:           Integer
// Output:          None
// Description:     isplay digits of a input 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}


////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}

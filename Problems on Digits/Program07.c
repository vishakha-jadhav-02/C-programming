// Accept Number and digit from user and check frequency of digit in Number

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountDigitFrequency
// Input:           Integer
// Output:          Integer
// Description:     return count of digit in number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int CountDigitFrequency(int iNo, int iSearch)
{
    int iDigit = 0, iCount = 0;

    if((iSearch < 0) || (iSearch > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == iSearch)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue1);

    printf("Enter the digit (0 to 9):\n");
    scanf("%d",&iValue2);

    iRet = CountDigitFrequency(iValue1, iValue2);

    printf("Frequency of digit %d in number %d is: %d",iValue2,iValue1,iRet);

    return 0;
}

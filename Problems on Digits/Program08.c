// Accept number from user and count even digit from that Number

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountEvenDigits
// Input:           Integer
// Output:          Integer
// Description:     return count of even digits 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int CountEvenDigit(int iNo)
{
    int iDigit = 0, iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit %2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue1);

    iRet = CountEvenDigit(iValue1);

    printf("Frequency of even digits in number %d is: %d",iValue1,iRet);

    return 0;
}

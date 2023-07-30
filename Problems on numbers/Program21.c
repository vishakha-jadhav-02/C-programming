// Accept base and power from user and return the calculated power of number

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CalculatePower
// Input:           Integer
// Output:          Integer
// Description:     return the power of number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int CalculatePower(int iBase, int iPower)
{
    int iCnt = 0;
    int iResult = 1;

    for(iCnt = 1; iCnt <= iPower; iCnt++)
    {
        iResult = iResult * iBase;
    }
    return iResult;
}

//////////////////////////////////////////////////////
// Entry point function
//////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    printf("Enter base : \n");
    scanf("%d",&iValue1);    
    printf("Enter power : \n");
    scanf("%d",&iValue2);    

    iRet = CalculatePower(iValue1,iValue2);

    printf("Reuslt is : %d\n",iRet);

    return 0;
}


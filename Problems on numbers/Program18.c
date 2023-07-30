// Accept number from user and check whether number is perfect or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   SumFactors
// Input:           Integer
// Output:          Integer
// Description:     return summation of factors 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)     // Updator
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

/////////////////////////////////////////////////////
//
// Function Name:   CheckPerfect
// Input:           Integer
// Output:          Boolean
// Description:     check whether input is perfect number 
//
////////////////////////////////////////////////////
bool CheckPerfect(int iNumber)
{
    int iResult = 0;

    iResult = SumFactors(iNumber);
    if(iResult == iNumber)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Entry point function 

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }
    return 0;
}

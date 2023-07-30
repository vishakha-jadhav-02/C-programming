// Accept number from user and check whether number is prime number or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CheckPrime
// Input:           Integer
// Output:          Boolean
// Description:     Check whether number is prime 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }

    return 0;
}

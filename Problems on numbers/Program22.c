// Accept number from user and return it's factorial

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Factorial
// Input:           Integer
// Output:          Integer
// Description:     return factorial of number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

/////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}

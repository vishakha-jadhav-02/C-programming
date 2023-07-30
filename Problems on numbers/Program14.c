//  Write a program which  check whether input is divisible by 3 and 5

#include<stdio.h>         // for printf and scanf
#include<stdbool.h>       // For bool datatype

/////////////////////////////////////////////////////
//
// Function Name:   CheckDivisible
// Input:           Integer
// Output:          Boolean
// Description:     check whether input is divisible by 3 and 5
// Author:          Vishakha Krishnarao Jadhav
// Date:            25/04/23
//
////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo%3)==0 && (iNo%5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
    int iValue = 0;                     // variable to accept input
    bool bRet = false;                  // variable to accept return value

    printf("Please enter number to check whether it is divisible by 3 and 5: \n");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);       //Function call

    if(bRet==true)
    {
        printf("%d is completely Divisible by 3 and 5.\n", iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5.\n", iValue);
    }

    return 0;
}

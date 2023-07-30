// Accept Number and digit from user and check whether digit is present in Number

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   ChkDigit
// Input:           Integer
// Output:          Boolean
// Description:     check whether digit is present in number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
bool ChkDigit(int No, int SearchD)
{
  int digit = 0;

  if((Search < 0) || (Search > 9))
    {
        printf("Enter the digit in range 0 to 9\n");
        return false;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }

  while(No != 0)
  {
    digit = No % 10;
    if(digit == SearchD)
      break;
    No = No / 10;
  }

  if(digit == SearchD)
    return true;
  else
    return false;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Enter number: \n");
    scanf("%d",&iValue1);

    printf("Enter the digit (0 to 9):\n");
    scanf("%d",&iValue2);

    bRet = CheckDigit(iValue1, iValue2);

    if(bRet == true)
    {
        printf("%d is present in %d.",iValue2,iValue1);
    }
    else
    {
        printf("%d is not present in %d.",iValue2,iValue1);
    }
  
  return 0;
}

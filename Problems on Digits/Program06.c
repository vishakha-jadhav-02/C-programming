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
bool(int No, int SearchD)
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
  int Value = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &Value);

  iRet = SumDigits(Value);
  printf("Sum of digits is: %d",iRet);
  
  return 0;
}

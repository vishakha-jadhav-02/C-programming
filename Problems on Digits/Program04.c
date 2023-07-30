// Accept Number from user and check whether 8 is present or not in it

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CheckDigit
// Input:           Integer
// Output:          Boolean
// Description:     Check whether digit is present or not 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
bool CheckDigit(int No)
{
  int digit = 0;

  while(No != 0)
  {
    digit = No % 10;
    if(digit == 8)
      break;
    No = No / 10;
  }
  
  if(digit == 8)
    return true;
  else
    return false;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int Value = 0;
  bool bRet = 0;

  printf("Enter number: ");
  scanf("%d", &Value);

  bRet = CheckDigit(iValue);
    if(bRet == true)
    {
        printf("Digit 8 is present in Number.\n");
    }
    else
    {
        printf("Digit 8 is not present in Number.\n");
    }
  
  return 0;
}

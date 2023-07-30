// Accept number from user and return sum of digits

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   SumDigits
// Input:           Integer
// Output:          Integer
// Description:     return summation of digits 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int SumDigits(int No)
{
  int iDigit = 0, iSum = 0;

  while(No != 0)
  {
    iDigit = No % 10;
    iSum = iSum + iDigit;
    No = No / 10;
  }

  return iSum;
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

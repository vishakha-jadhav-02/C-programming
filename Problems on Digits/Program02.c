// Accept number from user and count digits from it

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountDigits
// Input:           Integer
// Output:          Integer
// Description:     return count of digits in input
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int CountDigits(int No)
{
  int iCount = 0;
  int Digit = 0;

  while(No != 0)
  {
    Digit = No % 10;
    iCount++;
    No = No / 10;
  }

  return iCount;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits are : %d\n",iRet);

    return 0;
}

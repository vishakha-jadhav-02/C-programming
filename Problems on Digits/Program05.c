// Accept number from user and count frequency of 8 

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   SumDigits
// Input:           Integer
// Output:          Integer
// Description:     return summation of factors 
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
int Frequency(int No)
{
  int Count = 0, Digit = 0;

  while(No != 0)
  {
    Digit = No % 10;
    if(Digit == 8)
    {
      Count++
    }
    No = No / 10;
  }

  return Count;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int Value = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &Value);

  iRet = Frequency(Value);
  printf("Frequency of digit 8 is: %d",iRet);
  
  return 0;
}

// Accept number from user and print that number of * on screen

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          None
// Description:     Display * on screen 
// Author:          Vishakha Krishnarao Jadhav
// Date:            01/08/23
//
////////////////////////////////////////////////////
void Display(int No)
{
  int iCnt = 0;
  for(iCnt = 1; iCnt <= No; iCnt++)
  {
    printf("*\t");
  }
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int Value = 0;

  printf("Enter number: \n");
  scanf("%d", &Value);

  Display(Value);

  return 0;
}

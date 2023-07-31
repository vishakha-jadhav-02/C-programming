// Accept N numbers from user and return average of that N numbers

#include<stdio.h>
#include<stdlib.h>
  
/////////////////////////////////////////////////////
//
// Function Name:   AvgNumbers
// Input:           Integer array, Integer
// Output:          Float
// Description:     return average of numbers
// Author:          Vishakha Krishnarao Jadhav
// Date:            31/07/23
//
////////////////////////////////////////////////////
float AvgNumbers(int Arr[], int iLength)
{
  int iCnt = 0, iSum = 0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    iSum = iSum + Arr[iCnt];
  }

  avg = iSum / iLength;

  return avg;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int iSize = 0, iCnt = 0;
  int *ptr = NULL;
  float fRet = 0.0;

  printf("Enter number of elements: ");
  scanf("%d", &iSize);

  ptr = (int*)malloc(iSize * sizeof(int));

  printf("Enter the elements: \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d", &ptr[iCnt]);
  }

  printf("Elements of array: \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\t", ptr[iCnt]);
  }

  fRet = AvgNumbers(ptr, iSize);
  printf("\nAverage of numbers is: %f",iRet);

  return 0;
}

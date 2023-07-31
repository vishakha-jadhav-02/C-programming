// Accept n numbers from user and find out largest element from that numbers

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
// Function Name:   LargestNum
// Input:           Integer array, Integer
// Output:          Integer
// Description:     return Maximun number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            31/07/23
//
////////////////////////////////////////////////////
int LargestNum(int *Arr[], int iLength)
{
  int iMax = 0, iCnt = 0;
  iMax = Arr[0];

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }
  return iMax;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int iSize = 0, iCnt = 0, iRet = 0;
  int *ptr = NULL;

  printf("Enter number of elements: \n");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize * sizeof(int));

  printf("Enter elements: \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Elements of array are : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\t",ptr[iCnt]);
  }

  iRet = LargestNum(ptr, iSize);
  printf("\nLargest number is: %d",iRet);

  return 0;
}

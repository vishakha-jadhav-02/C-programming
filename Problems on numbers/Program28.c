// Accept N numbers from user and count odd numbers

#include<stdio.h>   
#include<stdlib.h> 

/////////////////////////////////////////////////////
//
// Function Name:   EvenCount
// Input:           Integer array, Integer
// Output:          Integer
// Description:     return count of odd numbers 
// Author:          Vishakha Krishnarao Jadhav
// Date:            31/07/23
//
////////////////////////////////////////////////////
int OddCount(int Arr[], int iLength)
{
  int iCount = 0, iCnt = 0;

  for(iCnt = 0;iCnt < iLength; iCnt++)
  {
    if((Arr[iCnt] % 2) == 0)
    {
      iCount++;
    }
  }
  return iCount;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////

int main()
{
  int iSize = 0, iCnt = 0, iRet = 0;
  int *ptr = NULL;

  printf("Enter the number of elements: ");
  scanf("%d",&iSize);

  ptr = (int*)malloc(iSize * sizeof(int));

  printf("Enter the elements: ");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }

  printf("Elements of array are: ");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\t",ptr[iCnt]);
  }

  int iRet = OddCount(ptr, iSize);
  printf("Number of odd elements are: %d", iRet);

  free(ptr);

  return 0;
}

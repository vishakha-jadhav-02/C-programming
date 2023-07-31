// Accept N numbers and one No from user and check whether No is present in N numbers or not

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
// Function Name:   Search
// Input:           Integer array, Integers
// Output:          Boolean
// Description:     ckeck whether No is present in N numbers 
// Author:          Vishakha Krishnarao Jadhav
// Date:            31/07/23
//
////////////////////////////////////////////////////
bool Search(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;
  bool bFlag = false;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] == iNo)
    {
      bFlag = true;
      break;
    }
  }
  return bFlag;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
  int iSize = 0, iCnt = 0, iNo = 0;
  int *ptr = NULL;
  bool bRet = false;

  printf("Enter number of elements: \n");
  scanf("%d", &iSize);

  ptr = (int*)malloc(iSize * sizeof(int));

  printf("Enter elements: );
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d", &ptr[iCnt]);
  }

  printf("Enter the number to be search: \n");
  scanf("%d", &iNo);

  printf("Elements of array are: );
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("%d\t", ptr[iCnt]);
  }

  bRet= Search(ptr, iSize, iValue);
  if(bRet == true)
  {
      printf("%d is present in array\n",iValue);
  }
  else
  {
      printf("%d is not present in array\n",iValue);
  }

  free(ptr);

  return 0;
}

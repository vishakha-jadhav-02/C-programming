// Accept N numbers from user as well as one another number and 
// return index of last occurance of that another number in N numbers 

#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1

/////////////////////////////////////////////////////
//
// Function Name:   SearchLastOccurance
// Input:           Integer array, Integers
// Output:          Integer
// Description:     return last occurence of No in N numbers 
// Author:          Vishakha Krishnarao Jadhav
// Date:            01/08/23
//
////////////////////////////////////////////////////
int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPos = iCnt;
        }
    }
    return iPos;
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the number that you want to search: \n");
    scanf("%d",&iValue);

    printf("Elements of array are: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet= SearchLastOccurance(ptr, iSize, iValue);
    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element.\n");
    }
    else
    {
        printf("%d last occured at index %d \n",iValue,iRet);
    }

    free(ptr);

    return 0;
}

// Accept N numbers from user as well as one another number and 
// return index of first occurance of that another number in N numbers 

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////////
//
// Function Name:   SearchFirstOccurance
// Input:           Integer
// Output:          Integer
// Description:     return first occurence of a number 
// Author:          Vishakha Krishnarao Jadhav
// Date:            31/07/23
//
////////////////////////////////////////////////////
int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    iRet= SearchFirstOccurance(ptr, iSize, iValue);
    if(iRet == -1)
    {
        printf("There is no such element.\n");
    }
    else
    {
        printf("%d occured at index %d \n",iValue,iRet);
    }

    free(ptr);

    return 0;
}

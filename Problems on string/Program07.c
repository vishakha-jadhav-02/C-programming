// Accept String from user and count number of letters in it 

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strlenX
// Input:           String
// Output:          Integer
// Description:     return number of letters in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);

    printf("Length of string is: %d", iRet);

    return 0;
}

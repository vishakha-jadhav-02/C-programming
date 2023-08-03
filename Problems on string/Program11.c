// Accept string from user and count number of whitespaces from string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountWhitespaces
// Input:           String
// Output:          Integer
// Description:     return number of whitespaces in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int CountWhitespaces(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str ==' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhitespaces(Arr);

    printf("Number of white spaces are: %d", iRet);

    return 0;
}

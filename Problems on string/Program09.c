// Accept String from user and count number of capital characters from that string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strlenCapitalX
// Input:           String
// Output:          Integer
// Description:     return number of capital letters in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int strlenCapitalX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str <='Z') && (*str >='A'))
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
    char Arr[10];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenCapitalX(Arr);

    printf("Number of capital letters are: %d", iRet);

    return 0;
}

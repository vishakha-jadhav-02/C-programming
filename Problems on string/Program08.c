// Accept String from user and count number of small characters from that string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strlenSmall
// Input:           String
// Output:          Integer
// Description:     return number of letters in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int strlenSmall(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str) <= 'z' && (*str) >= 'a')
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

    iRet = strlenSmall(Arr);

    printf("Number of small letters are: %d", iRet);

    return 0;
}

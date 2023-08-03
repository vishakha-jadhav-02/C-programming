// Accept string from user and count frequency of z

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountChar
// Input:           String
// Output:          Integer
// Description:     return frequency of z in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int CountChar(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str =='z')
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

    iRet = CountChar(Arr);

    printf("Number of z are: %d", iRet);

    return 0;
}

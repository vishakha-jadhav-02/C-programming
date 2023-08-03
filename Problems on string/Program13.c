// Accept string and letter from user and count frequency of letter in that string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountChar
// Input:           String, character
// Output:          Integer
// Description:     return frequency of character in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int CountChar(char *str, char cValue)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character: ");
    scanf("%c",&ch);

    iRet = CountChar(Arr,ch);

    printf("Number of occurences of %c in string are: %d",ch, iRet);

    return 0;
}

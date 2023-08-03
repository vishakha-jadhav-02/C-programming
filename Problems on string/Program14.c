// Accept the string and character from user and obtain the first occurance of that character in the string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   FirstOccurance
// Input:           String, character
// Output:          Integer
// Description:     return first occurence of character in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int FirstOccurance(char *str, char cValue)
{
    int iCnt = 1;
    int iPos = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            iPos = iCnt;
            break;
        }
        str++;
        iCnt++;
    }
    return iPos;
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    char ch='\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    printf("Enter the character: ");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr, ch);

    printf("First occurance of character %c is at: %d",ch,iRet);

    return 0;
}

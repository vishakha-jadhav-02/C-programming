// Accept character from user and check whether input is digit or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Character
// Output:          Boolean
// Description:     Check whether input character is digit or not
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
bool CheckDigit(char cValue)
{
    if((cValue >= '0') && (cValue <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char ch ='\0';
    bool bRet = false;

    printf("Enter character: ");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(ch == true)
    {
        printf("%c is digit\n",ch);
    }
    else
    {
        printf("%c is not digit.\n",ch);
    }

    return 0;
}

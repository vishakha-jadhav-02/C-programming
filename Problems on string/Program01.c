// Accept character from user and check whether character is capital or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CheckCapital
// Input:           Character
// Output:          Boolean
// Description:     Check whether input character is capital or not
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue <= 90))
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

    bRet = CheckCapital(ch);

    if(ch == true)
    {
        printf("%c is capital letter\n",ch);
    }
    else
    {
        printf("%c is not capital letter.\n",ch);
    }

    return 0;
}

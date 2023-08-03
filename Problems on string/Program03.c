// Accept character from user and check whether character is small or not

#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////
//
// Function Name:   CheckSmall
// Input:           Character
// Output:          Boolean
// Description:     Check whether letter is small case or not
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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

    bRet = CheckSmall(ch);

    if(ch == true)
    {
        printf("%c is small case letter\n",ch);
    }
    else
    {
        printf("%c is not small case letter.\n",ch);
    }

    return 0;
}

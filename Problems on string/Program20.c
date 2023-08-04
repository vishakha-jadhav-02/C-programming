// Accept string from user and replace capital letters with corresponding small letters

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strlwrX
// Input:           String
// Output:          None
// Description:     display updated string
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
            *str =*str + 32;
        }
        str++;
    }
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[30];

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    strlwrX(Arr);

    printf("String after editing is: %s\n",Arr);

    return 0;
}

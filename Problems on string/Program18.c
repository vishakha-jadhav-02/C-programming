// Accept string from user and replace capital letter with *

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   EditString
// Input:           String
// Output:          None
// Description:     display updated string
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void EditString(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
            *str ='*';
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

    EditString(Arr);

    printf("String after editing is: %s\n",Arr);

    return 0;
}

// Accept string from user and replace small letters with corresponding capital letters and vice versa

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strtoggleX
// Input:           Pointer 
// Output:          None
// Description:     display updated string
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strtoggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&& (*str <= 'z'))
        {
            *str =*str - 32;
        }
        else if((*str >= 'A')&& (*str <= 'Z'))
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

    strtoggleX(Arr);

    printf("String after editing is: %s\n",Arr);

    return 0;
}

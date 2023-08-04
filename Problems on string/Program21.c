// Accept string from user and replace small letters with corresponding capital letters

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   struprX
// Input:           String
// Output:          None
// Description:     display updated string in upper case
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a')&& (*str <= 'z'))
        {
            *str =*str - 32;
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

    struprX(Arr);

    printf("String after editing is: %s\n",Arr);

    return 0;
}

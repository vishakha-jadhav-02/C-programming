// Accept two strings from user and concate that two strings

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcatX
// Input:           Strings 
// Output:          None
// Description:     concate strings
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcatX(char *src, char *dest)
{
    // 1: travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }
    
    // 2: copy data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    // 3: write '\0' at end of dest
    *dest ='\0';
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30] = "Demo";

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

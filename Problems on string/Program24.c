// Accept string from user and copy that string in another 

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcpyX
// Input:           Pointer 
// Output:          None
// Description:     display updated string
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    strcpyX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

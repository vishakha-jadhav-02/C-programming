// Accept string from user and copy the capital characters

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcpycapX
// Input:           Pointer 
// Output:          None
// Description:     copy capital case characters from string
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcpycapX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
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

    strcpycapX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

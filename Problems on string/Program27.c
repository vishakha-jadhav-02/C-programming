// Accept string from user and copy string by toggling characters

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcpytoggleX
// Input:           Pointer 
// Output:          None
// Description:     copy string by toggling characters
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcpytoggleX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + '32';
        }
        else if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - '32';
        }
        else
        {
            *dest = *src;
        }
        dest++;
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

    strcpytoggleX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

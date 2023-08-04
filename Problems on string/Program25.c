// Accept string from user and copy the small characters

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcpysmallX
// Input:           Pointers 
// Output:          None
// Description:     copy smallcase characters
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcpysmallX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
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

    strcpysmallX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

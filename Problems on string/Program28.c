// Accept string from user and copy in reverse format

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strcpyrevX
// Input:           Pointer 
// Output:          None
// Description:     copy string in reverse order
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strcpyrevX(char *src, char *dest)
{
    int iLength = 0;

    while(*src != '\0')
    {
        src++;
        iLength++;
    }

    src--;

    while(iLength != 0)
    {
        *dest = *src;
        dest++;
        src--;
        iLength--;
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

    strcpyrevX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

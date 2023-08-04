// Accept two strings from user concate the content of first string at second string
// just tll the number of letters specified by user

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   strncatX
// Input:           Strings, Integer
// Output:          None
// Description:     concate no. of letters to another string 
// Author:          Vishakha Krishnarao Jadhav
// Date:            04/08/23
//
////////////////////////////////////////////////////
void strncatX(char *src, char *dest, int iLength)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }
    *dest ='\0';
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[30];
    char Brr[30] = "Demo";
    int iNo = 0;

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    printf("\nEnter number of letters that you want to concate: ");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

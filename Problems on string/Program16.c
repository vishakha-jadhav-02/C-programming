// Accept string from user and display frequency of small case characters and frequency of capital characters

#include<stdio.h>
#define ERR_NOTFOUND -1

/////////////////////////////////////////////////////
//
// Function Name:   Frequency
// Input:           String
// Output:          None
// Description:     Display count smallcase & capitalcase 
//                  characters in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
void Frequency(char *str)
{
    int iSumS = 0, iSumC = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSumS++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iSumC++;
        }
        str++;
    }
    printf("Frequency of small characters is: %d\n", iSumS);
    printf("Frequency of capital characters is: %d", iSumC);
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[20];

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    Frequency(Arr);

    return 0;
}

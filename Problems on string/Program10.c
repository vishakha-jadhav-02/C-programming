// Accept String from user and count number of vowels from that string

#include<stdio.h>

/////////////////////////////////////////////////////
//
// Function Name:   CountVowels
// Input:           String
// Output:          Integer
// Description:     return number of vowels in string
// Author:          Vishakha Krishnarao Jadhav
// Date:            03/08/23
//
////////////////////////////////////////////////////
int CountVowels(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str =='a') || (*str =='e')|| (*str =='i')|| (*str =='o')|| (*str =='u')|| (*str =='A')|| (*str =='E')|| (*str =='I')|| (*str =='O')|| (*str =='U'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////
int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountVowels(Arr);

    printf("Number of vowels are: %d", iRet);

    return 0;
}

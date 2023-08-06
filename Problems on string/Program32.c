// Accept two strings fron user and compare them

#include<stdio.h>
#include<stdbool.h>

bool strcmpX(char *str1, char *str2)
{
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)
        {
            break;
        }
        str1++;
        str2++;
    }
    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter first string:\n");
    scanf("%[^'\n']s",Arr);

    printf("\nEnter second string:\n");
    scanf(" %[^'\n']s",Brr);

    bRet = strcmpX(Arr,Brr);
    if(bRet == true)
    {
        printf("\nBoth the strings are identical.");
    }
    else
    {
        printf("\nBoth the strings are different.");
    }

    return 0;
}

// Accept string from user and check whether it is palindrom or not

#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
    
    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }

    if(start < end)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char Arr[30];
    bool bRet = false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);


    bRet = ChkPalindrome(Arr);
    if(bRet == true)
    {
        printf("\nString is Palindrome.");
    }
    else
    {
        printf("\nString is not Palindrome");
    }

    return 0;
}

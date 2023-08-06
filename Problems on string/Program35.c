// Accept string from user and reverse the contents in same string 

#include<stdio.h>

void strrevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];
    
    printf("Enter string: ");
    scanf("%[^'\n']",Arr);

    strrevX(Arr);

    printf("Reverse string is: %s\n",Arr);

    return 0;
}

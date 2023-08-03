// Accept String from user and count number of letters in it 

#include<stdio.h>
#include<string.h>

int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr);

    printf("Length of string is: %d", iRet);

    return 0;
}

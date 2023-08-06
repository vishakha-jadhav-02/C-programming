// Accept string from user and copy that string in another with specified no of characters by user

#include<stdio.h>

void strcpyX(char *src, char *dest,int iLength)
{
    while((*src != 0) && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];
    int iNo = 0;

    printf("Enter string: ");
    scanf("%[^\n']s",Arr);

    printf("\nEnter number of characters that you want copy: ");
    scanf("%d",&iNo);

    strcpyX(Arr,Brr,iNo);

    printf("String after copy is: %s\n",Brr);

    return 0;
}

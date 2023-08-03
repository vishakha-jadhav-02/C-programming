// Accept name from user and display 

#include<stdio.h>

int main()
{
    char Arr[10];

    printf("Enter name: \n");
    scanf("%[^'\n']s", Arr);

    printf("Your name is: %d", Arr);

    return 0;
}

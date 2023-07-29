// Accept number from user and display all its non factors

#include<stdio.h>

void NonFact(int No)
{
    int iCnt=0;

    for(iCnt=1; iCnt<No; iCnt++)
    {
        if((No % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int Value=0;

    printf("Enter number \n");
    scanf("%d",&Value);

    NonFact(Value);
    return 0;
}

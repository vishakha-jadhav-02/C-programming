// Accept two numbers from user and display first number second number of times

#include<stdio.h>

void Display(int No, int Frequency)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= Frequency; iCnt++)
    {
        printf("%d\t",No);
    }
}

int main()
{
    int Value1 = 0, Value2 = 0;

    printf("Enter number: ");
    scanf("%d", &Value1);

    printf("Enter frequency: ");
    scanf("%d", &Value2);

    Display(Value1, Value2);
    
    return 0;
}

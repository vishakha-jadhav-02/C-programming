// Accept one number from user and print that number of * on screen

#include<stdio.h>

void Accept(int No)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= No; iCnt++)
  {
    printf("*\t");
  }
}

int main()
{
  int Value = 0;

  printf("Enter the number: ");
  scanf("%d", &Value);

  Accept(Value);

  return 0;
}

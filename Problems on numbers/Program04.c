// Accept number from user and display multiplication of its factors

#include<stdio.h>

int MultFactors(int No)
{
  int Mult = 1;
  int iCnt= 0;

  for(iCnt = 1; iCnt <= No/2; iCnt++)
  {
    if((No % iCnt) == 0)
    {
      Mult = Mult * iCnt;
    }
  }
  
  return Mult;
}

int main()
{
  int Value = 0;
  int iRet = 0;

  printf("Enter number:");
  scanf("%d", &Value);

  iRet = MultFactors(Value);
  printf("Multiplication of factors is: %d",iRet);

  return 0;
}

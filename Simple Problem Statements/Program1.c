// Accept two numbers from user and Display division of that numbers

#include<stdio.h>

float Divide(int No1, int No2)
{
  int Ans = 0;

  if(No 2 == 0)
  {
    return -1;
  }  
  
  Ans = iNo1 / iNo2;

  return Ans;
}

int main()
{
  int Value1 = 0, Value2 = 0;
  int iRet = 0;
  
  printf("Enter First number: ");
  scanf("%d", &Value1);

  printf("Enter Second number: ");
  scanf("%d", &Value2);

  iRet = Divide(Value1, Value2);
  printf("Division of two numbers is: %d", iRet);

  return 0;
}

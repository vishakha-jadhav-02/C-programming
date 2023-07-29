// Accept two numbers from user and check whether numbers are equal or not

#include<stdio.h>

bool ChkEqual(int No1, int No2)
{
  if(No1 == No2)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int Value1 = 0, Value2 = 0;
  bool bRet = false;

  printf("Enter first number: ");
  scanf("%d", &Value1);

  printf("Enter second number: ");
  scanf("%d", &Value2);

  bRet = ChkEqual(Value1, Value2);
  if(bRet == true)
  {
    printf("Numbers are equal");
  }
  else
  {
    printf("Numbers are not equal");
  }

  return 0;
}

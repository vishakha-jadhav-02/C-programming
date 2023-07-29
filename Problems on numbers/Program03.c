// Accept number from user and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int No)
{
  if((No % 2) == 0)
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
  int Value = 0;
  bool bRet = false;

  printf("Enter number: ");
  scanf("%d", &Value);

  bRet = ChkEven(Value);
  if(bRet == true)
  {
    printf("Number is Even");
  }
  else
  {
    printf("Number is Odd");
  }

  return 0;
}

// Accept number from user and check whether that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int No)
{
  if(No > 100)
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

  bRet = ChkGreater(Value);
  if(bRet == true)
  {
    printf("Greater than 100");
  }
  else
  {
    printf("Less than 100");
  }

  return 0;
}

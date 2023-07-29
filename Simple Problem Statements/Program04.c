// Accept number from user and check whether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool Check(int No)
{
  if((No % 5) == 0)
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

  printf("Enter the number: ");
  scanf("%d",&Value);

  bRet = Check(Value);
  if(bRet == true)
  {
    printf("%d is divisible by 5",Value); 
  }
  else
  {
    printf("%d is not divisible by 5",Value);
  }

  return 0;
}

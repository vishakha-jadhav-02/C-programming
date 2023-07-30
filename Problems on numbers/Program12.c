// Accept total marks and obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int Total, int Obtain)
{
  float Ret = 0.0;

  Ret = (Obtained / Total) * 100;

  return Ret;
}

int main()
{
  int Value1 = 0, Value2 = 0;
  float fRet = 0.0;

  printf("Enter total marks: ");
  scanf("%d", Value1);

  printf("Enter obtained marks: ");
  scanf("%d", Value2);

  fRet = Percentage(Value1, Value2);
  printf("Percentage are: %d %%", fRet);

  return 0;
}

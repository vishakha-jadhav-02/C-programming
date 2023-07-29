// Accept number from user and display its factors in decreasing order

#include<stdio.h>

void FactorsRev(int No)
{
  int iCnt = 0;

  for(iCnt =(No/2); iCnt > 0; iCnt--)
  {
    if((No % iCnt) == 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int Value = 0;

  printf("Enter number: ");
  scanf("%d", &Value);

  FactorsRev(Value);

  return 0;
}

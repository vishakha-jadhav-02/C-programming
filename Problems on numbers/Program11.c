// Accept three numbers from user and print its multiplication

#include<stdio.h>

int Mult(int No1, int No2, int No3)
{
  int iMult = 0;

  iMult = No1 * No2 * No3;

  return iMult;
}

int main()
{
  int Value1 = 0, Value2 = 0, Value3 = 0, iRet = 0;

  printf("Enter three numbers: ");
  scanf("%d %d %d",&Value1, &Value2, &Value3);

  iRet = Mult(Value1, Value2, Value3);
  printf("Multiplication of numbers: ", iRet);

  return 0;
}

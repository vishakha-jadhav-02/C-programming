// Addition of two numbers 

#include<stdio.h>

int Addition(int No1, int No2)
{
  int Ans = 0;

  Ans = No1 + No2;

  return Ans;
}

int main()
{
    int No1 = 0, int No2 = 0, int iRet = 0;
    
    printf("Enter first Number: \n");
    scanf("%d",&No1);

    printf("Enter second Number: \n");
    scanf("%d",&No2);

    iRet = No1 + No2;
    printf("Addition is: %d",iRet);

    return 0;
}


// Accept number from user if number is less than 10 print "Less than 10" otherwise print "Greater than/equal to 10"

#include<stdio.h>

void Display(int No)
{
  if(No < 10)
  {
    printf("Less than 10");
  }
  else
  {
    printf("Less than 10");
  }
}

int main()
{
  int Value = 0;

  printf("Enter the number: ");
  scanf("%d", &Value);

  Display(Value);
  
  return 0;
}

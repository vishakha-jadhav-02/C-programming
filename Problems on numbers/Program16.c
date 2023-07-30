// Accept number from user and display all numbers till that number

#include<stdio.h>
/////////////////////////////////////////////////////
//
// Function Name:   Display
// Input:           Integer
// Output:          None
// Description:     Display numbers
// Author:          Vishakha Krishnarao Jadhav
// Date:            30/07/23
//
////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)       //Updater
    {
        iNo = -iNo;
    }

    for(iCnt=1; iCnt<=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

////////////////////////////////////////////////////
// Entry point function
///////////////////////////////////////////////////
int main()
{
    int iValue=0;   // variable to accept input

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    Display(iValue);  // function call
  
    return 0;
}

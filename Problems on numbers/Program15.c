// Write the program to accept marks and display the class accordingly
// 0 to 34
// 35 to 49
// 50 to 59
// 60 to 74
// 75 to 100

#include<stdio.h>         // for printf and scanf

/////////////////////////////////////////////////////
//
// Function Name:   DisplayClass
// Input:           Integer
// Output:          Boolean
// Description:     
// Author:          Vishakha Krishnarao Jadhav
// Date:            25/04/23
//
////////////////////////////////////////////////////
void DisplayClass(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    //Filter
    {
        printf("Invalid Input \n");
        printf("Please enter the marks in between the range 0 to 100.");
    }
    else if((fMarks >= 0.0f) && (fMarks < 35.00f))
    {
        printf("You are fail.\n");
    }
    else if((fMarks >= 35.0f) && (fMarks < 51.00f))
    {
        printf("You got pass class.\n");
    }
    else if((fMarks >= 50.0f) && (fMarks < 60.00f))
    {
        printf("You got second class.\n");
    }
    else if((fMarks >=60.0f) && (fMarks < 75.00f))
    {
        printf("You got First class.\n");
    }
    else if((fMarks >= 75.0f) && (fMarks <= 100.00f))
    {
        printf("You got Distinction.\n");
    }
}

// Entry function
int main()
{
    float fValue = 0.0f;

    printf("Please enter your percentage: \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}

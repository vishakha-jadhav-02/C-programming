// Accept number from user and return difference between summation of all its non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum1 = 0;     // sum of factorials
    int iSum2 = 0;      // sum of non factorials
    int iCnt = 0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iSum1= iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return (iSum1 - iSum2);
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}

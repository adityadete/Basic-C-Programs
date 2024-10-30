#include<stdio.h>

int SumEven(int iNo)
{
    int iDigit = 0,iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int SumOdd(int iNo)
{
    int iDigit = 0,iSum = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{

    int iValue = 0, iRet1 = 0, iRet2 = 0, iDiff = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);    

    iRet1 = SumEven(iValue);
    iRet2 = SumOdd(iValue);

    iDiff = iRet1 - iRet2;

    printf("Difference Between Summation of Even And odd digits is %d",iDiff);

    return 0;
}
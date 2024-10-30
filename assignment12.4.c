#include<stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0,iMul = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);    

    iRet = MultiDigits(iValue);

    printf("Multiplication of Digits is %d",iRet);

    return 0;
}
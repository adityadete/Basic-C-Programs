#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0,iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iFreq++;
        }
        iNo = iNo / 10;
    }
    return iFreq;
}

int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);    

    iRet = CountEven(iValue);

    printf("Total Even Numbers is %d",iRet);

    return 0;
}
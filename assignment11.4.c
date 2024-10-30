#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0,iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of 4 is %d",iRet);

    return 0;
}
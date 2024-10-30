#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0,iFreq = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency Below 6 is %d",iRet);

    return 0;
}
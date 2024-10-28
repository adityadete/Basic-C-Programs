#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum = 0, iSum1 = 0, iDiff = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for(int i=1; i<=iNo; i++)
   {
        if(iNo % i != 0)
        {  
            iSum = iSum + i;
        }
    }
    for(int i=1; i<=iNo; i++)
    {
        if(iNo % i == 0)
        {
            iSum1 =iSum1 + i;
        }
    }

    iDiff = iSum - iSum1; 
    return iDiff;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    
    printf("Difference between factors & Non-Factors are %d",iRet);

    return 0;
}
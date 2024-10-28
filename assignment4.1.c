#include<stdio.h>

int MultFact(int iNo)
{
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for(int i = 1;i<= iNo/2;i++)
   {
        if(iNo % i == 0)
        {   
            iSum = iSum * i;
        }
   }
    return iSum;
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Sum of Factors: %d",iRet);
    
    return 0;
}
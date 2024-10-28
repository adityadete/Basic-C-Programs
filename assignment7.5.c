#include <stdio.h>

int OddFactorial(int iNo)
{
    int fact = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (int i = 1; i <= iNo; i++)
    {
        if (i % 2 != 0) 
        {
            fact = fact * i; 
        }
    }

    return fact;
}

int DisplayEvenFactors(int iNo)
{
    int iSum = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(int i = 1; i <= iNo / 2; i++)
    {
        if(iNo % i == 0) 
        {   
            if(i % 2 == 0)
            {
                iSum += i; // Add the even factor to the sum
            }
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0, iRet1 = 0, Diff = 0;

    printf("Enter Your Number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);
    iRet1 = DisplayEvenFactors(iValue);

    Diff = iRet - iRet1;

    printf("Difference is %d\n", Diff);

    return 0;
}

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int fact = 1;

    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (int i = 2; i <= iNo; i += 2)
    {
        fact *= i;
    }

    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d is %d\n", iValue, iRet);

    return 0;
}

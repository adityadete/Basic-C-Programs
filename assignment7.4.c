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
            fact *= i; 
        }
    }

    return fact; 
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Your Number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue); 

    printf("Odd factorial of %d is %d\n", iValue, iRet);

    return 0;
}

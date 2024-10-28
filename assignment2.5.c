#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if(iNo % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);

    
    bRet = CheckEvenOdd(iValue);

    if(bRet == true )
    {
        printf("This is Even Number");
    }
    else
    {
        printf("This is odd Number");
    }

    return 0;
}
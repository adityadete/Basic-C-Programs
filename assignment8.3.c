#include <stdio.h>

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance in kilometers: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("The distance in meters is %d\n", iRet);

    return 0;
}

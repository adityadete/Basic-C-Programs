#include <stdio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * 5 / 9;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fValue);  

    dRet = FhtoCs(fValue);

    printf("The temperature in Celsius is %.2f\n", dRet);

    return 0;
}

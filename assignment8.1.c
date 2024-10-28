#include <stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    return PI * fRadius * fRadius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius: ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("The area of the circle is %.2f\n", dRet);

    return 0;
}

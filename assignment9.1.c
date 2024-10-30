#include<stdio.h>

float CircleArea(float fRadius)
{

    return 3.14 * fRadius * fRadius;
}

int main()
{

    float fValue = 0.0;
    float fRet = 0.0;

    printf("Enter Radius: ");
    scanf("%f",&fValue);

    fRet = CircleArea(fValue);

    printf("Area of this circle is %.2f",fRet);

    return 0;
}
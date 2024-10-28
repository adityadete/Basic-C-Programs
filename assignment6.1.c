#include <stdio.h>

void Number(int iValue)
{
    if (iValue < 50)
    {
        printf("Small\n");
    }
    else if (iValue >= 50 && iValue < 100)
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}

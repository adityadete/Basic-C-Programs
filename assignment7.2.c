#include <stdio.h>

float DollerToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number if USD: ");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue); // Call the conversion function

    printf("Value in INR is %d",iRet);
    
    return 0;
}

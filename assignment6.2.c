#include <stdio.h>

void Display(int digit)
{
    if (digit < 0 || digit > 9)
    {
        printf("Invalid input.\n");
        return; 
    }

    switch(digit)
    {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a single digit number (0-9): ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
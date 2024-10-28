#include <stdio.h>

void Display(int iNo)
{
    
    for (int i = 1; i <= iNo; i++)
    {
        printf("* ");
    }

    
    for (int i = 1; i <= iNo; i++)
    {
        printf("# "); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue); 

    Display(iValue); 

    return 0;
}

#include <stdio.h>

void TableRev(int iNo)
{
    for (int i = 10; i >= 1; i--) // Loop from 10 down to 1
    {
        printf("%d ", iNo * i); // Print the multiples
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue); 

    TableRev(iValue); 

    return 0;
}

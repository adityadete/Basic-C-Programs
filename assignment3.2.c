#include<stdio.h>

void DisplayFactors(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for(int i = 1;i<= iNo/2;i++)
   {
    if(iNo % i == 0)
    {
        printf("%d\t",i);
    }
   }

}

int main()
{
    int iValue = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
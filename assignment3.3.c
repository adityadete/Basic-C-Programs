#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for(int i = 1;i<= iNo/2;i++)
   {
    if(iNo % i == 0)
    {   
        if(i % 2 ==0)
        {
        printf("%d\t",i);
        }
    }
   }

}

int main()
{
    int iValue = 0;

    printf("Enter Your Number: ");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
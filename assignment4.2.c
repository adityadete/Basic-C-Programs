#include<stdio.h>

void FactRev(int iNo)
{
    int iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

   for(int i=iNo; i<=iNo;i--)
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

    FactRev(iValue);
    
    return 0;
}
#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0)
    {
        iStart = -iStart;
    }

    if(iStart > iEnd)
    {
        printf("Invalid range.\n");
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{

    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting Range: ");
    scanf("%d",&iValue1);

    printf("Enter end Range: ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition of Even Numbers: %d",iRet);

    


    return 0;
}
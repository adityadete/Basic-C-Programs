#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char Cvalue)
{
    if (Cvalue == 'a' || Cvalue == 'e' || Cvalue == 'i' || Cvalue == 'o' || Cvalue == 'u')
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{

    char cValue;
    bool bRet = false;

    printf("Enter Your Number: ");
    scanf("%c",&cValue);

    
    bRet = ChkVowel(cValue);

    if(bRet == true )
    {
        printf("This is Vowel");
    }
    else
    {
        printf("This is Not a Vowel");
    }

}
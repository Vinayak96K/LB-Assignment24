#include"MyHeader.h"

int main(int argc, char const *argv[])
{

    int iValue=0;
    BOOL bRet=FALSE;
    
    printf("Enter a positive integer number:");
    scanf("%d",&iValue);
    if(iValue<0)
    {
        iValue=-iValue;
    }
    printf("%d\n",iValue);

    printf("\nQuestion 1:\n");
    printf("Number after switching 7th bit to OFF :%d\n",OffBit(iValue));
    
    printf("\nQuestion 2:\n");
    printf("Number after making 7th and 10th bit OFF :%d\n",OffBitX(iValue));
    
    printf("\nQuestion 3:\n");
    printf("Number after toggle 7th bit :%d\n",ToggleBit(iValue));

    printf("\nQuestion 4:\n");
    printf("Number after toggle 7th and 10th bits :%d\n",ToggleBitX(iValue));

    printf("\nQuestion 5:\n");
    printf("Number after switching the 4th bit to ON :%d\n",OnBit(iValue));

    return 0;
}

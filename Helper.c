#include"MyHeader.h"

//Accepts number, switches the 7th bit to OFF in its binary representation and returns the modified number.
UINT OffBit(UINT iNo)
{
    UINT iMask = 0xFFFFFFBF;
    
    iNo=(iNo & iMask);
    return iNo;
}

//Accepts number, switches the 7th & 10th bit OFF in its binary representation and returns the modified number.
UINT OffBitX(UINT iNo)
{
    UINT iMask = 0xFFFFFDBF;
    
    iNo=(iNo & iMask);
    return iNo;
}

//Accepts number, toggles the 7th bit in its binary representation and returns the modified number.
UINT ToggleBit(UINT iNo)
{
    UINT iMask1 = 0x00000040;
    UINT iMask2 = 0xFFFFFFBF;

    if((iNo & iMask1)==0)
    {
        iNo=((iNo) | (iMask1));
    }
    else
    {
        iNo=(iNo & iMask2);
    }
    return iNo;
}

//Accepts number, toggles the 7th and 10th bits froms its binary representation and returns the modified number.
UINT ToggleBitX(UINT iNo)
{
    UINT iMask1 = 0x00000240;
    UINT iMask2 = 0xFFFFFDBF;

    if((iNo & iMask1)==0)
    {
        iNo=((iNo) | (iMask1));
    }
    else
    {
        iNo=(iNo & iMask2);
    }
    return iNo;
}

//Accepts number, switches the 4th bit to ON in its binary representation and returns the modified number.
UINT OnBit(UINT iNo)
{
    UINT iMask = 0x00000008;

    iNo=(iNo | iMask);
    return iNo;

}
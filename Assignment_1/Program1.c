#include<stdio.h>

////////////////////////////////////////////////////////////////
//
//      Function Name :  Divide
//      Input         :  Interger, Interger
//      Output        :  Interter
//      Description   :  Divides two number and return -1 if the divisor is zero
//      Date          :  26/10/2026
//      Author        :  Abhay Shivdas Nanavare
//
////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 > iNo1)
    {
        return -1;
    }

    iAns = iNo1 / iNo2;

    return iAns;

}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;
}
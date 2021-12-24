// Header file inclusion
#include<stdio.h>

int SumEven(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = SumEven(iValue);// Display(954)
    printf("Sum Of Even Digits Are : %d\n",iRet);
    
    return 0;
}
int SumEven(int iNo)
{
    int iCnt = 0,iDigit = 0, iSum = 0;
	
	if(iNo < 0)     // Input updator
    {
        iNo = -iNo;
    }
	
    while(iNo > 0)
    {
		iDigit = iNo % 10;
		if((iDigit % 2)==0)
		{
			iSum = iSum + iDigit;
		}
		
        iNo = iNo / 10;
    }
    return iSum;
}

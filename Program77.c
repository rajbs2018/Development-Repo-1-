
#include<stdio.h>

int Addition(int Brr[])

{
	int iSum = 0, iCnt = 0;
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		iSum = iSum + (*Brr);
		B++;
	}
	return iSum;
}
int main()
{
	int Arr[5]; 
	int iRet = 0;
	
	printf("Enter numbers\n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet = Addition(Arr); // Addition(100);
	
	printf("Addition is :%d\n",iRet);
	
	
	return 0;
}

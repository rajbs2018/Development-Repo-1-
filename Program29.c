//Header File
#include<stdio.h>

//Function Declaration
int CountDigi(int);

// Entry point function
int main()
{
	int iValue = 0;
	int iRet = 0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	   
	iRet=CountDigi(iValue); // Function call
	printf("Sum of the Digits : %d",iRet);
	return 0;
}

// Function defination
int CountDigi(int iNo)
{
	// Local variables
	int iDigit = 0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
	iDigit = iNo % 10;
	iCnt++; //iCnt = iCnt +1;
	iNo = iNo / 10;          //752
	}
	return iCnt;
}
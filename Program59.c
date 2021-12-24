#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	char ch = 'A';
	for(iCnt = 1,ch ='A';iCnt<=iNo ;iCnt++,ch++)
	{
		printf("%c\n",ch);
	}
	printf("\n");
}

int main()
{
	
	int iValue = 0;
	
	printf("Enter number of Rows and colomns\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
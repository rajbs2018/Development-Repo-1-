/*
iRow = 3
iCol = 3

1	2	3
1	2	3
1	2	3
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{	
	int i= 0, j = 0;
	
	for(i =1;i <= iRow; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}

int main()
{
	int iValue1 =0, iValue2 =0;
	
	printf("Enter No of Rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter No of Colomn\n");
	scanf("%d",&iValue2);
	
	
	Display(iValue1,iValue2);
	
	return 0;
}
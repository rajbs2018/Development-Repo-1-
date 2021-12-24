#include<stdio.h>
#include<stdlib.h>


int SumOdd(int Arr[],int iSize)
{
	int i = 0, iCnt = 0;
	int Avg = 0 , iSum = 0;
	
	for (i =0;i < iSize; i++)
	{
		if((Arr[i] % 2) != 0)
		{
			iSum = iSum + Arr[i];
			iCnt++;
		}			
	}
	return iCnt;
	
}

int main()
{
int iLength = 0, i = 0, iRet = 0;
int *ptr = NULL;
float fRet = 0.0f;
printf("Enter number of elements \n");
scanf("%d",&iLength);

ptr = (int*)malloc(sizeof(int)*iLength);

printf("Enter elements\n");
for(i = 0; i < iLength ; i++)
{
scanf("%d",&ptr[i]);
}
fRet = SumOdd(ptr,iLength);
printf("Number of even elements is : %.2f\n",fRet); // .2f is width specifier

printf("Enter data is\t");
for(i = 0; i < iLength ; i++)
{
printf("%d\t",ptr[i]);
}

free(ptr);
return 0;
}

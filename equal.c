#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL equal(int iNo1,int iNo2)
	{
		if(iNo1==iNo2)
			{
				return TRUE;
			}
		else
			{
				return FALSE;
			}
	}


int main()
	{
		int iValue1,iValue2;
		BOOL iRate;
		
		printf("\n Enter two number");
		scanf("%d%d",&iValue1,&iValue2);
		
		iRate=equal(iValue1,iValue2);
		
		if(iRate==TRUE)
			{
				printf("\n No are equal");
			}
		else
			{
				printf("\n not equal");
			}
		return 0;
	}

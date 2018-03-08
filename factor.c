#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL equal(int iNo1,int iNo2)
	{
		if(iNo1%iNo2==0)
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
				printf("\n It is Factor");
			}
		else
			{
				printf("\n It is not factor");
			}
		return 0;
	}

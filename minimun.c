#include<stdio.h>

int minimum(int iNo1,int iNo2)
	{
		if(iNo1>iNo2)
			{
				return iNo2;
			}
	
		else
			{
				return iNo1;
			}
	}



int main()
	{
		int iValue1,iValue2;
		printf("\n Enter two no");
		scanf("%d%d",&iValue1,&iValue2);
		int iRate=0;
		
		iRate=minimum(iValue1,iValue2);
		printf("Minimum No is %d",iRate);
		return 0;
	}

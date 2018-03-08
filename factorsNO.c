
#include<stdio.h>


	void factor(int iNo)
	{
	int icnt=0;
	for(icnt=1;icnt<iNo;icnt++)
		{
			if(iNo%icnt==0)
			{
				printf("\t%d",icnt);
			}
			
		}
		printf("\n Above are factor of%d",iNo);
	}




int main()
	{
     		int iValue1;
		printf("\n enter the no");
		scanf("%d",&iValue1);
			

		factor(iValue1);

		return 0;
	}

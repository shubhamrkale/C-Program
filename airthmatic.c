#include<stdio.h>


int airthmatic(int a,int b,int op)
 {
	
	switch(op)
		{
		  case 1:
			return a+b;
			break;
		  case 2:
			return a-b;	
			break;
		  case 3:
			return a*b;	
			break;
		 case 4:
			return a/b;
			break;
		default:
			printf("\n enter right choice");
			
		}
}




int main()
	{
		int iValue1,iValue2;
		int opt=0;
		
		printf("\n Enter two numbers");
		scanf("%d%d",&iValue1,&iValue2);
		printf("\n enter the option");
		scanf("%d",&opt);
		
		int iRate=airthmatic(iValue1,iValue2,opt);
		printf("result is%d",iRate);

		return 0;

	}

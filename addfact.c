#include<stdio.h>

int addfact(int ino1)
{

	int icnt=0;
	int sum=0;
	for(icnt=1;icnt<ino1;icnt++)
	{
		if(ino1%icnt==0)
		sum=sum+icnt;
	}
	return sum;

}



int main()
{
	int iValue1;
	printf("\n Enter the number");
	scanf("%d",&iValue1);
	int iRate=0;
		
	iRate=addfact(iValue1);

	printf("\n addtion of factor is%d",iRate);
	return 0;
}

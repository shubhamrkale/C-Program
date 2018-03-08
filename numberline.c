#include<stdio.h>


void NumberLine(int iNO)
{

	int icnt=0;
	int no=iNO;
	for(icnt=no;icnt>=-no;icnt--)
	{
		printf("%d",icnt);
	} 

}



int main()
{
	int iValue;
	printf("\n enter the number");
	scanf("\n%d",&iValue);
	
	NumberLine(iValue);

	return 0;
}
	

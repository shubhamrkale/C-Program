#include<stdio.h>


void display(int ivalue)
{
	int icnt=0;
	for(icnt=1;icnt<=ivalue;icnt++)
		{
		printf("*");
		printf("$");
		}
}










int main()
	
{
	int no;
	printf("\n enter the number");
	scanf("%d",&no);
	display(no);
	return 0;
}

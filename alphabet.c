#include<stdio.h>


void display(int ino1)
{
	if(ino1>26)
		{
			return;
		}
	
	int icnt=0;
	int upto=65;
	upto=upto+ino1;	
	
	for(icnt=65;icnt<upto;icnt++)
		{
			printf("\n %c",icnt);
		}
}







int main()
{
	int ino=0;
	printf("\n enter the number");
	scanf("%d",&ino);
	char ch1='A';
	
		
	
	display(ino);
	return 0;
}

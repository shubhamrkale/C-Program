#include<stdio.h>

void table(int ino)
{

if(ino==0)
	{
	return;
	}
int icnt=0;
for(icnt=1;icnt<=10;icnt++)
	{
		printf("%d\n",icnt*ino);
	}


}








int main()
{
	int no;
	printf("\n enter the number");
	scanf("%d",&no);
	
	table(no);
	return 0;
}

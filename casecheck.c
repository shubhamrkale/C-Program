#include<stdio.h>


void check(char ch1)
{
	if((ch1>='a')&&(ch1<='z'))
		{
			printf("\n lowercase");
		}
	else
		{
		printf("\n capitals");
		}
}


int main()
{
	char ch;
	printf("\n enter the character");
	scanf("%c",&ch);
	check(ch);
	return 0;
}

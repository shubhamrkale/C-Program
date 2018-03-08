#include<stdio.h>

int square(int ino)
{

return ino*ino;
}


int main()
{
	int no;
	
	printf("\n enter the number");
	scanf("%d",&no);
	
	int iRate=square(no);
	printf("\n square is%d",iRate);
	return 0;
}

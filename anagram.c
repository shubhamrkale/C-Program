#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckAnagram(int,int);

int main()
{	
	int ino1=0,ino2=0;
	BOOL iRate=TRUE;
	printf("Enter 1St number:");
	scanf("%d",&ino1);
	printf("Enter 2 nd number:");
	scanf("%d",&ino2);
	iRate=CheckAnagram(ino1,ino2);
	if(iRate==TRUE)
	{	
	printf("\n No are Anagram\n");
	}
	else
	{
	printf("\n Not Anagram\n");
	}
    return 0;
}




BOOL CheckAnagram(int ino1,int ino2)
{
	int Arr[10]={0};
	int i=0;
	
	while(ino1!=0)
	{
	Arr[ino1%10]++;
	Arr[ino2%10]--;
	ino2=ino2/10;
	ino1=ino1/10;
	}
	
	for(i=0;i<10;i++)
	{
		if(Arr[i]!=0)
		{
			break;
		}
	}
	
	if(i==10)
	{
	return TRUE;
	}
	else
	{
	return FALSE;
	}
}





























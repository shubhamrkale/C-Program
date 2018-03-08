
#include<stdio.h>


int maximum(int ino1,int ino2,int ino3,int ino4)
	{
	if((ino1>ino2)&&(ino1>ino3)&&(ino1>ino4))
		{
			return ino1;
		}
	else if((ino2>ino1)&&(ino2>ino3)&&(ino2>ino4))
		{
			return ino2;
		}
	else if((ino3>ino1)&&(ino3>ino2)&&(ino3>ino4))
		{
			return ino3;
		}
	else
		{
			return ino4;
		}
	}
	








int main()
{
	int no1,no2,no3,no4;
	printf("\n enter four number");
	scanf("%d%d%d%d",&no1,&no2,&no3,&no4);
	
	int iRate=maximum(no1,no2,no3,no4);
	printf("\n maximium no is%d",iRate);
	return 0;
}

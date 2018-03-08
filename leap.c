#include<stdio.h>

void testleap(int year)
{

if((year<999)||
   (year>9999))
	{
	return;			//filter
	}

	
if((year%4==0)||
	   (year%400==0))
		{
			printf("\n it is leap year");
		}
	else
		{
			printf("\n not a leap year");
		}

}

int main()
{
	int year1;
	printf("\n enter the year");
	scanf("\n %d",&year1);
	
	testleap(year1);	
	

	return 0;
}

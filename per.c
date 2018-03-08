#include<stdio.h>

double percentage(double mark1,double tmark1)
	{
		double percen=(mark1/tmark1)*100;
			return percen;
	}



int main()
{
	double mark,tmark;
	printf("\n enter mark");
	scanf("\n%lf",&mark);
	printf("\n enter total mark");
	scanf("\n%lf",&tmark);
	
	double iRate=percentage(mark,tmark);
	printf("\n percentage of stud is%lf",iRate);
	return 0;
}

#include<stdio.h>
#define PI 3.14
double area(int radius)
{

double area=PI*radius*radius;
	return area;

}


int main()
{
	double rad=0;
	printf("\n enter the radius");
	scanf("\n%lf",&rad);
	
	double iRate=area(rad);
	printf("\n area is%lf",iRate);
	return 0;
}

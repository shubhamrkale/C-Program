#include<stdio.h>

float celtemp(float fern)
{
	float celcius=(fern-32)*5/9;
	return celcius;

}



int main()
{
	float fernh;
	printf("\n enter temp in ferehite");
	scanf("\n%f",&fernh);
	
	float iRate=celtemp(fernh);
	printf("\n temp in cellcius%f",iRate);
	return 0;
}

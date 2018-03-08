#include<stdio.h>


void display(double price1)
{

	if(price1<500)
		{
			price1=price1/10;
			printf("\n discount is10percentage %lf",price1);
		}
	else if((price1>500)&&
		(price1<2000))
		{
		price1=price1/20;
		printf("\n discount is 20percentage %lf",price1);
		}
	else
		{
			price1=price1/30;
			printf("\n discount is 30percentage %lf",price1);
		}
			


}




int main()
{
	double price;
	printf("\n enter the price of product");
	scanf("%lf",&price);
	display(price);
	return 0;
}

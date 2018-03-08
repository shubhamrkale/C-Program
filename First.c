#include<stdio.h>

void pattern(int,int);


int main()
{

//pattern(4,4);
//pattern1(4,4);
//pattern2(4,4);
//pattern3(4,4);
//pattern4(4,4);
//pattern5(4,4);
//pattern6(4,4);
//pattern7(4,4);
//pattern8(4,4);
pattern9(4,4);
return 0;
}

/*
To print pattern like this
      * * *
      * * * 	
      * * *
      * * *		
*/
void pattern(int iRow,int iCol)
{
	int i=0,j=0;
	
	if((iRow<1)||(iCol<1))
	{
		return;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*");
		}
	printf("\n");
	}
}

/*To print pattern like this
	1 1 1 1
	2 2 2 2
	3 3 3 3
	4 4 4 4


*/

void pattern1(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
		}
	printf("\n");
	}
}

/*
	1 2 3 4
	1 2 3 4
	1 2 3 4	
	1 2 3 4
*/

void pattern2(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",j);
		}
	printf("\n");
	}
}

/*
	1  2  3   4
  	5  6  4   8
	9 10 11  12
       13 14 15  15
*/
void pattern3(int iRow,int iCol)
{
	int i=0,j=0,icnt=1;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",icnt);
			icnt++;
		}
	printf("\n");
	}
}
/*

	* 
	* *
	* * *
	* * * *
*/

void pattern4(int iRow,int iCol)
{

	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",i);
		}
	printf("\n");
	}
}

/*
	* * * *
	*     *
	*     * 
	* * * *
*/

void pattern5(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{	
		for(j=1;j<=iCol;j++)
		{
			if((i==1)||(j==1)||(i==iRow)||(j==iCol))
			{
				printf("*\t");
			}
			else
			{
				printf(" \t");
			}
		}
		printf("\n");
	}
}

/*

	a a a a
	b b b b
	c c c c
	d d d d
*/
void pattern6(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='a';

	for(i=1;i<=iRow;i++,ch++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
		}
	printf("\n");
	}
}


/*
	a b c d
	a b c d
	a b c d
	a b c d
*/

void pattern7(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='a';
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='a';j<=iCol;j++,ch++)
		{
			printf("%c\t",ch);
		}
	printf("\n");
	}
}
/*

	$ # # #
	* $ # #
	* * $ #
	* * * $

*/
void pattern8(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i==j)
			{
				printf("$\t");
			}
			else if(i>j)
			{
			printf("*\t");
			}
			else
			{
			printf("#\t");
			}
		}
	printf("\n");
	}
}	

/*
	* * * *
	* * *
	* *
	*
*/
void pattern9(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("*\t");
		}
	printf("\n");
	}
}

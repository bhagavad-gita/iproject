/* Chapter 3.5.2 Amicable Pairs of Number or not
	Sekar Che, Feb 2015 */
	
#include<stdio.h>

int main()
{
	int a;
	int b;
	int i;
	int sum1=0;
	int sum2=0;
	
	printf ("Enter the pairs of number to find Amicable pair or  not....? \n");
	scanf("\n%d %d", &a, &b);
	
	for (i = 1; i < a ; i++)
	{
		if (a % i == 0)
			sum1 = sum1 + i;
	}
	for (i = 1; i < b ; i++)
	{
		if (b % i == 0)
			sum2 = sum2 + i;
	}
	if (a == sum2 && b == sum1)
		printf ("\n Given numbers are Amicable Numbers");
	else
		printf("\n Given numbers are Not Amicable Numbers");

}


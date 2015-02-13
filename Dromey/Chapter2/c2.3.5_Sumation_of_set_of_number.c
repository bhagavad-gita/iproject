/* Chapter 2.3.5 Sum of N numbers ,odd ,even, Squares  
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int i;
	int sumall(int i);
	int odd(int i);
	int even(int i);
	int sumsq(int i);
	
	printf ("Enter the number :");
	scanf ("%d", &i);
	
	sumall(i);
	odd(i);
	even(i);
	sumsq(i);
	
	return 0;
}

int sumall(int n)	
{
	
	printf ("Sum of N numbers: %d\n", (n * (n + 1)) / 2);
	
}

int sumsq(int n)
{
	printf ("Sum of Squre of N number : %d \n%d", (n * (n + 1)*(2*n + 1))/6);
}

int odd(int n)	
{
	
	int i;
	int j = 0;
	int sum;
	
	for (i =1; i <= n ; ++i)	{
		if (i % 2 != 0) {
		j += 1;
		}
	}
	
	sum = j * j;
	
	printf ("Sum of Odd numbers : %d\n", sum);
}

int even(int n)	
{
	int y;
	int a;
	int x = 2;
	int sum;

	if (n % 2 == 0) {
		y = n;
	}
	else {
		y = n-1;	
	}
	
	a = ((x + y)/2) - 1;
	sum = a * (a + 1);
	
	printf ("Sum of even numbers : %d\n", sum);
}



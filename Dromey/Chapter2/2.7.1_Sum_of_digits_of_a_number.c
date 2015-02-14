/* Chapter 2.7 Sum of digits a number
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	int i;
	int a;
	int sum = 0;

	printf ("Enter a Number : ");
	scanf("%d", &n);

	while(n != 0) {
		a = n % 10;
		sum += a;
		n = n / 10;					
	}	
	
	printf ("Sum of digits of number : %d", sum);

	return 0;
}



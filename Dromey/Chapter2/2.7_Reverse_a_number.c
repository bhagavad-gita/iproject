/* Chapter 2.7 Reversing a Number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	int i;
	int a;
	int sum = 0;

	printf ("Enter a Number to reverse : ");
	scanf("%d", &n);

	while(n != 0) {
		a = n % 10;
		sum = sum * 10 + a;
		n = n / 10;					
	}	
	
	printf ("Reversed number : %d", sum);

	return 0;
}



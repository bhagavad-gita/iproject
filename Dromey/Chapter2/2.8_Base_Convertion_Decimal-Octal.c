/* Chapter 2.8 Base Convertion Decimal to octal
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	int a;
	int sum = 0;
	int sum1 = 0;

	printf ("Enter Decimal Integer : ");
	scanf ("%d", &n);

	while (n != 0) {
		a = n % 8;
		sum = sum * 10 + a;
		n = n / 8;			
	}	

	while (sum != 0) {
		a = sum % 10;
		sum1 = sum1 * 10 + a;
		sum = sum / 10;			
	}
	
	printf ("Converted Octal integer :%d", sum1);	

	return 0;
}



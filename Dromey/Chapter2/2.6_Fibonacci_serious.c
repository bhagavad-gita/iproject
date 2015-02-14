/* Chapter 2.6 Fibonacci Serious
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	int a = 0;
	int b = 1;
	int c;
	int i;
	
	printf ("Enter Count of Fibonacci Serious : ");
	scanf ("%d", &n);
	
	printf ("Serious is: \n");
	printf ("0 1 ");	
	
	for (i = 2 ; i < n ; ++i) {
		c = a + b;
		a = b;
		b = c;
	
		printf("%d " , c);
	}

	return 0;
}




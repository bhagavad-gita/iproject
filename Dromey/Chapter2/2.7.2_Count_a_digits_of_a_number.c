/* Chapter 2.7 Count a digits in number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	int count = 0;
	
	printf ("Enter a Number to count a digit : ");
	scanf("%d", &n);

	while(n != 0) {
		n = n / 10;
		count ++;					
	}	
	
	printf ("No of Digits : %d", count);

	return 0;
}



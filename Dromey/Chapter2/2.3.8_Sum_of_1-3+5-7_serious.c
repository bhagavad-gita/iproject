/* Chapter 2.3.8 Sum of this serious 1 -3 5 -7 9 .....
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()

{
	int n;
	int i;
	int j;
	int count = 0;
	int sum1 = 0;
	int sum2 = 0;
	int sum = 0;
	
	printf ("Sum of This seriuos 1-3+5-7+9....\n")
	printf ("Enter How many number you want to sum : \n");
	scanf ("%d", &n);

	for (i =1,j=3  ; count < n ; count += 2, i += 4, j += 4) {
		sum1 = sum1 + i;
		sum2 = sum2 + j;
		sum = sum1 - sum2;
		
	}	
	
	printf ("Sum of first %d number is: %d ", n, sum);

	return 0;
}



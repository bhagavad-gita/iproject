/* Chapter 2 Algorithm 3_1 Harmonics Mean of Set of numbers
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
	int n;
	float a[100];
	float tot = 0;
	int i;

	printf ("Enter how many number to array : ");
	scanf ("%d", &n);

	for (i = 0 ; i < n ; ++i) {
		scanf ("%f", &a[i]);
		tot += 1 / a[i];
	}
	
	tot *= n;

	printf ("Harmonics means of array values is: %f", tot);

	return 0;
	
}



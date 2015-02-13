/* Chapter 2.3.7 Print the sequence 1 -1 1 -1 1 -1
	Sekar Che, Feb 205 */
	
#include <stdio.h>

int main()

{
	int n;
	int i;

	printf ("Total : ");
	scanf ("%d", &n);

	for (i = 0 ; i < n ; ++i) {
		if(i % 2 == 0) {
			printf ("1 ");
		}
		else {
			printf ("-1 ");
		}
	}

	return 0;
}



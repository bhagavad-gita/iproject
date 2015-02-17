/*Chapter 3.6.1 Generate a Random number using rand() 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
#include <stdlib.h>
 
int main() {
	int i;
	int a;
	int count;

	printf ("Enter Count of Random number:");
	scanf ("%d",&count);
	
	printf ("Ten random numbers in 1 to 1000\n");
	for (i = 1; i <= count; i++) {
		a = rand() % 1000 + 1;
		printf("%d\n", a);
	}
 
	return 0;
}


/* Chapter 3.6 Generate psudo-Random number
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
    int a;
    int b;
    int max;
    int count = 0;
    int x[5000];
	int i = 0;
	
	printf ("Enter Number of Randam numbers:\n");
	scanf ("%d",&max);

    while (0 <= x[i] <= max - 1 && count <= 20) {
         b = 853;
         a = 109;
         x[i + 1] = (a * x[i] + b) % max;
         ++count;
         ++i;
	} 
    
    for (i = 0; i < max; ++i) {
          printf ("%d ", x[i]);
    }
    return 0;
}



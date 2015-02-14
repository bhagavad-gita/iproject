/* Chapter 2.4 Fibonacci or not?
	Sekar che, Feb 2015 */
	
#include <stdio.h>

int fact(int n)
{
	if(n == 0) {
    	return 1;
    } else if(n == 1) {
    	return 1;
	} else {
    	return n * fact(n - 1);
    }
}

int main()
{
	int n;
    int i = 0;

    printf ("Number factorial or not ? : ");
    scanf ("%d", &n);

    for (i = 0; fact(i) <= n; i++) {
    	if (n == fact(i)) {
        	printf ("Factorial");
            return 0;
        }
	}

    printf("Not a factorial");

	return 0;
}


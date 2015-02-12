/* Chapter 02 Alg.1. Exchanging the two Integers
	
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main (void)

{
    int a;
    int b;

    void Exchange(int c, int d);

    printf ("Enter the values of 2 numbers \n");
    scanf ("%i%i", &a, &b);
    
    printf ("Before Exchange:\n");
    printf ("A is : %i \nB is : %i \n", a, b);

    Exchange(a, b);

    return 0;
}

void Exchange(int c, int d)

{
    int temp = 0;

    temp = c;
    c = d;
    d = temp;
	
	printf ("After Exchanged:\n");
    printf ("a = %i \nb = %i", c, d);

}



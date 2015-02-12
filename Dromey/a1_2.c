/* Chapter 02 Alg.1. Exchanging the Four Integers
	
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main (void)

{
    int a;
    int b;
    int c;
    int d;

    void Exchange(int a, int b, int c, int d);

    printf ("Enter the values of 4 numbers \n");
    scanf ("%i%i%i%i", &a, &b, &c, &d);
    
    printf ("Before Exchange:\n");
    printf ("A is : %i \nB is : %i \nC is : %i\nD is : %i\n", a, b, c, d);

    Exchange(a, b, c, d);

    return 0;
}

void Exchange(int a, int b, int c, int d)

{
    int temp;

    temp = d;
    d = c;
    c = b;
    b = a;
    a = temp;
    	
    printf ("After Exchanged:\n");
    printf ("a = %i \nb = %i\nc = %i\nd = %i", a, b , c, d);

}




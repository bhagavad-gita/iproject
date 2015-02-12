/* Chapter 02 Alg.1. Exchanging the three Integers
	
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main (void)

{
    int a;
    int b;
    int c;

    void Exchange(int a, int b, int c);

    printf ("Enter the values of 3 numbers \n");
    scanf ("%i%i%i", &a, &b, &c);
    
    printf ("Before Exchange:\n");
    printf ("A is : %i \nB is : %i \nC is : %i\n", a, b, c);

    Exchange(a, b, c);

    return 0;
}

void Exchange(int a, int b, int c)

{
    int temp;
    temp = c;
	 
    c = b;
	b = a;
    a = temp;
    	
	printf ("After Exchanged:\n");
    printf ("a = %i \nb = %i\nc = %i", a, b , c);

}



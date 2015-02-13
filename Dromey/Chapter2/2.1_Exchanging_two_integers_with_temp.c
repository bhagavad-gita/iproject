/* Chapter 02 Alg.1. Exchanging the two Integers
	
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main (void)

{
    int a;
    int b;
    int temp;

    printf ("Enter the values of 2 numbers \n");
    scanf ("%i%i", &a, &b);
    
    printf ("Before Exchange:\n");
    printf ("A is : %i \nB is : %i \n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf ("After Exchange :\n");
    printf ("A is : %i \n B is %i\n", a, b);

    return 0;
}



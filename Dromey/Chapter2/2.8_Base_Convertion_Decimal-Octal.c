/* Chapter 2.8 Base Conversion : Binary to octal
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
#include <math.h>
<<<<<<< HEAD

=======
>>>>>>> f0d46d46fe42e6747db6dfa14dc7fa2e2859b51e

int main()
{
	int dec_oct(int n);
	int n;
	
	printf ("/***Decimal to Octal Conversions***/\n");
	
	printf ("Enter Decimal Number: \n");
	scanf ("%d", &n);
	
	printf ("Decimal	=		Octal\n");
	printf ("%d		=		%d ", n, dec_oct(n));
	
	return 0;
	
<<<<<<< HEAD
}

int dec_oct(int n)  
{
    int i = 1;
    int rem =0;
    int oct = 0;
    
    while (n != 0) {					/*Decimal to Octal*/
        rem = (n % 8);
        n /= 8;
        oct += rem * i;
        i *= 10;
    }
    
    return oct;
=======
>>>>>>> f0d46d46fe42e6747db6dfa14dc7fa2e2859b51e
}

int dec_oct(int n)  
{
    int i = 1;
    int rem =0;
    int oct = 0;
    
    while (n != 0) {					/*Decimal to Octal*/
        rem = (n % 8);
        n /= 8;
        oct += rem * i;
        i *= 10;
    }
    
    return oct;
}


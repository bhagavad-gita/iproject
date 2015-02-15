/* Chapter 2.8 Base Conversion : Binary to octal
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
#include <math.h>


int main()
{
	int bin_oct(int n);
	int n;
	
	printf ("/***Binary to Octal Conversions***/\n");
	printf ("Enter Binary Number: \n");
	scanf ("%d", &n);
	printf ("Binary		=		Octal\n");
	printf ("%d		=		%d ",n,bin_oct(n));
	
	return 0;
	
}

int bin_oct(int n)  
{
    int oct = 0;
	int dec = 0;
	int i = 0;
	
    while (n != 0) {					/*Binary to Decimal*/
        dec += (n % 10) * pow(2,i);
        ++i;
        n /= 10;
    }
    
    i = 1;
    while (dec != 0) {					/*Decimal to Octal*/
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    
    return oct;
}



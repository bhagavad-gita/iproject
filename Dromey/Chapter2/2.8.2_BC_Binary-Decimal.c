/* Chapter 2.8 Base Conversion : Binary to Decimal Conversion
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
#include <math.h>


int main()
{
	int bin_dec(int n);
	int n;
	
	printf ("/***Binary to Decimal Conversions***/\n");

	printf ("Enter Binary Number: \n");
	scanf ("%d", &n);

	printf ("Binary		=		Decimal\n");
	printf ("%d		=		%d ",n,bin_dec(n));
	
	return 0;
	
}

int bin_dec(int n)  
{

	int dec = 0;
	int i = 0;
	
    while (n != 0) {					/*Binary to Decimal*/
        dec += (n % 10) * pow(2,i);
        ++i;
        n /= 10;
    }
    
    return dec;
}



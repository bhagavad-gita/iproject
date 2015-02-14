/* Chapter 2.5 Sine Fbnction
	Sekar Che , Feb 2015 */
	 
#include <stdio.h>
#include <math.h>

float fact(int n)
{
	if (n == 0) {
    	return 1;
    }
	else if (n == 1) {
    	return 1;
    }
	else {
	    return n * fact(n - 1);
	}
}

int main()
{
	float x;
	int i = 1;
	float a = 0;
	int count = 0;
	float b ;

	printf ("Enter the x : ");
	scanf ("%f", &x);

	if (x != 0) {
		do {
			if ((count % 2) == 0) {		
				a += (pow(x,i) / fact(i));
				b = a;				
			} else {
				a -= pow(x,i) / fact(i);
				b = b - a;
			}
 			++count;
			i = i + 2;				
		}while ( b > 0.008);
	}
	else {
		printf ("sin(0) = 0");
		return 0;	
	}

	printf ("\nSin (%f) = %f",x, a);	
	
	return 0;
}




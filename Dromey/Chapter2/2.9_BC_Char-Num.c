/* Chapter 2.9 String to Decimal Conversion 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
#include <string.h>

int main()
{
	char num[100];
	int dec = 0;
	int i;
	int j;
	int len;
	
	printf ("Enter a string: \n");
	gets (num);
	
	len = strlen(num);
	
	for (i=0; i<len; i++){
		dec = dec * 10 + ( num[i] - '0' );
	}
	
	printf ("\n%d", dec);
	
	return 0;
}


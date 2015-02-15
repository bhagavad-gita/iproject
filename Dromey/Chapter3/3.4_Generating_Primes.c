/* Chapter 3.4 Generating Prime number
	Sekar Che, Feb 2015 */
	 
#include<stdio.h>
 
int main()
{
	int n;
	int i = 3;
	int count;
	int c;
 
	printf ("Enter the number of prime numbers \n");
	scanf ("%d",&n);
   
	printf ("Prime Numbers are :\n2\n");
   
	for ( count = 2 ; count <= n ;  )
	{
		for ( c = 2 ; c <= i - 1 ; c++ ) {
			
        	if ( i % c == 0 )
            break;
		}
      	if ( c == i ) {
        	printf ("%d\n",i);
         	count++;
		}
      i++;
	}
 
   return 0;
}



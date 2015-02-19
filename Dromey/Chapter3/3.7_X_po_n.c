/* Chapter 3.7.Raising a number to large number
	Sekar Che,Feb 2015 */
	
#include <stdio.h>

int power(int x, int n)
{
    int a;
    
    a = x;
    if (n > 0) {
         while (n - 1 != 0) {
                 x =  x * a;
                 n -= 1;
         } 
         return x;
    }
}

int main()
{
    int x;
    int n;
    
    printf ("Enter x : ");
    scanf ("%d", &x);
    
    printf ("Enter n : ");
    scanf ("%d", &n);
    
    printf ("%d Power %d : %d", x, n, power(x,n));

    return 0;
}



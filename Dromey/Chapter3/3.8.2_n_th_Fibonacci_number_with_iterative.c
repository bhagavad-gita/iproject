/* Chapter 3.8.2 Nth Fibonacci number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>


int main()
{
    int n;

    printf ("Enter Which fibonacci Number You want : ");
    scanf ("%d", &n);
    
    fib(n);
    return 0;
}

int fib(int n)
{
    int a = 0;
    int b = 1;
    int i;
    int c;
    
	if (n == 0) {
         printf ("1st fibonacci number is: 0 ");
    } else if (n == 1) {
         printf ("2nd fibonacci number is: 1 ");
    } else {
         for (i = 2; i < n; ++i) {
               c = a + b;
               a = b;
               b = c;
         } if (c == 3) {
         	printf ("3rd Fibonacci Number is: %d",c);
         } else {
         	printf ("%dth fibonacci number is: %d ",n, c);
		 }
    }
}



/* Chapter 3.8.2 Nth Fibonacci number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>


int main()
{
    int n;

    printf ("Enter How many fibonacci Number You want : ");
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
         printf (" 0 ");
    } else if (n == 1) {
         printf (" 1 ");
    } else {
         for (i = 2; i < n; ++i) {
               c = a + b;
               printf (" %d ",c);
               a = b;
               b = c;
         } 
    }
}



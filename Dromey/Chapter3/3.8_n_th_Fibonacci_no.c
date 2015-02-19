/* Chapter 3.8 Find Nth Fibonacci number
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int fib(int n)
{
    if(n == 0) {
         return 0;
    } else if(n == 1) {
         return 1;
    } else {
         return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    int i;
    long long int f;
    
    printf ("Number : ");
    scanf ("%d", &n);
    
    f = fib(n - 1);
    printf ("n-th Fibonacci number is: %d",f);

    return 0;
}


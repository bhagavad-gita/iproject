/* Chapter 3.3 Greatest Common Divisor
	Sekar Che, Feb 2015 */
	
#include <stdio.h>
 
int gcd(int, int);
 
int main()
{
    int a, b, num;
 
    printf ("Enter the two numbers to find GCD: ");
    scanf ("%d%d", &a, &b);
 
    num = gcd(a, b);
 
    printf ("The GCD of %d and %d is : %d.\n", a, b, num);
}
 
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            return gcd(a - b, b);
        }
        else
        {
            return gcd(a, b - a);
        }
    }
    return a;
}


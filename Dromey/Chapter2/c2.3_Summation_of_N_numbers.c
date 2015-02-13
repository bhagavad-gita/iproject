/* Chapter 2 Algorithm 3 Summation of Set of numbers 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
    int n;
    int a[100];
    int sum = 0;
    int sum_sq = 0;
    int sum1 = 0;
	int i;
	float avg;

    printf ("Enter how many number to array : ");
    scanf ("%d", &n);

    for (i = 0 ; i < n ; ++i) {
    	scanf ("%d", &a[i]);
        sum += a[i];
        sum_sq += a[i] * a[i];
    }
    
    for (i = 0; i < n-1; ++i) {
    	sum1 += a[i];
    }
    
	avg = sum / n;	
    
	printf ("Sum of array is: %d\n", sum);
    printf ("N-1 Sum is : %d\n", sum1);
    printf ("Average is : %f\n", avg);
    printf ("Sum of Squares : %d",sum_sq);
    
    return 0;
    
}




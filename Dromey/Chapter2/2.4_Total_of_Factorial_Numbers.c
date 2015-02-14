/* Chapter 2.4 Total of Factorial Numbers
	Sekar Che, Feb 2015 */
	
#include<stdio.h>

int main(void)
{

    int n;
    int i;
    int tot = 1;

    printf("Enter the how many numbers factorial you want");
    scanf("%i", &n);

    for (i = 1; i <= n; i++) {
    	tot = tot * i;
    }
    
    printf("%i", tot);

    return 0;
}



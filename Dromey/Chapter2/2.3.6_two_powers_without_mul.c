/*Chapter 2.3.6 Print 1,2,4,8,serious without using multiplication
	Sekar Che, Feb 2015 */

#include <stdio.h>

int main()
{
	int n;
    int i;

    printf("Enter How many number you want to print : ");
    scanf("%d", &n);
	printf ("1 ");	
		

    for(i = 1 ; i < n ; ++i) {
    	
		printf ("%d ", 2 << i - 1 );	
    }
	
    return 0;
}



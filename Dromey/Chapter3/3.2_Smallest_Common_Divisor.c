/*Chapter 3.2 Smallest Common Divisor of a number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
    int n;
    int i;
 
	printf("The Enter the number :\n ");
	scanf("%d", &n);
    
    
	for (i = 2; i < n ; i++) {

		if (n % i == 0) {
			printf ("LCM is :%i",i);
			break;
		}
		else {
			printf("NO LCM, Because it is prime number!!!");
			break;
		}
	}
        
    return 0;
}



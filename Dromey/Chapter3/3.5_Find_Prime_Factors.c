/* Chapter 3.5 Find a prime facters of a number
	Sekar Che, Feb 2015 */
	 
#include <stdio.h>

int main()
{
    
    int number;
	int div = 2;
	    
    printf ("Enter a number to find Prime Factors: ");    
    scanf ("%d",&number);
    
    printf ("\nThe prime factors are: \n");
    
    while (number != 0){
        if (number % div != 0)
            div = div + 1;
        else {
            number = number / div;
            printf ("%d \n",div);
            if (number == 1)
                break;
        }
    }
    
    return 0;
}



/* Chapter 2 Alorithm 2 Counting numbers and sum of number 
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
        int n;
        int a[100];
        int count = 0;
        int count1 = 0;
        int count2 = 0;
        int i;

        printf ("Enter how many number to array : ");
        scanf ("%d", &n);

        for (i = 0 ; i < n ; ++i) {
                scanf ("%d", &a[i]);
                count += a[i];
                if (a[i] >= 0) {
                	count1++;
                }
                else {
                	count2++;
                }
        }
        
        printf ("No. of Positive Number : %i\n", count1);
        printf ("No of Negative Number : %i\n", count2);

        printf ("Sum of array is: %d\n", count);

        return 0;
}



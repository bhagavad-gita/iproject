/* Chapter 4 Array order reversal
	Sekar Che, Feb 2015 */
	
#include <stdio.h>

int main()
{
    int i;
	int n;
    int a[100];
    int temp;
    
    printf ("Total no of Elements : ");
    scanf ("%d", &n);
    
    printf ("Enter the Elements:\n");
    for (i = 0; i < n; ++i) {
          scanf("%d", &a[i]);
    } 
    
    printf ("Array Reverasl:\n");
     for (i = 0; i < n; ++i) {
          temp = a[i];
          a[i] = a[n - i - 1];
          a[n - i - 1] = temp;
    }
    
    for (i = 0; i < n; ++i) {
          printf ("%d ", a[i]);
    }
    
	return 0;
}

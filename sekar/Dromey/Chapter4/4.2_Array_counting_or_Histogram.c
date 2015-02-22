/* Chapter 4.2 Counting Array or Histogram
	Sekar che, Feb 2014 */
	
#include <stdio.h>

int main()
{
    int n;
    int i;
    int j;
    int a[100];
    int count[100];
        
    printf ("Num of Students (upto 100) ");
    scanf ("%d", &n);
    
    for (i = 0; i < n; ++i) {
    	printf ("\nStudent %d's mark : ", i + 1);
        scanf ("%d", &a[i]);
    } 
    
    for (i = 0; i < 100; ++i) {
    	count[i] = 0;
    }
    
    for (i = 0; i < n; ++i) {
    	for (j = 0; j < 100; ++j) {
        	if (a[i] == j) {
               ++count[j];
			   break;
 		    }
	    }	  
    }
    
    printf ("\n");
    
    for (i = 0; i < 100; ++i) {
	if (count[i] == 1) {
	   printf (" %d = %d student\n", i, count[i]);
        }
	else if (count[i] > 1) {
  	   printf ("%d = %d students\n", i, count[i]);
	}
    }
    
    return 0;
}



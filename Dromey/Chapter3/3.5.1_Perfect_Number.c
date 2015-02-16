/* Chapter 3.5.1_Perfect Number
	Sekar Che, Feb 2015 */
	
#include<stdio.h>

int main()
{
	int num;
	int i;
	int sum;
 
	printf ("Perfect numbers (1 to 500):\n");
  
	for (num = 1;num <= 500;num++) {
		i = 1;
		sum = 0;
		
		while (i < num) {
    		if (num % i == 0)
    			sum = sum + i;
    		i++;
    	}

    	if (sum == num)
			printf ("%d \n",num);
	}

	return 0;
}



/* Chapter 3.1 Find Square Root of a Number
	Sekar Che, Feb 2015 */
	
#include<stdio.h>

int main()
{
	float m;
	float n;
	float num;
	n = 0.0001;   
	
	printf ("Enter a Number : ");
	scanf ("%f",&num);
 
	for (m = 0; m < num; m = m + n) {
		
		if((m * m) > num) {
			m = m - n;          
			break;      
		}
	}	
	printf("%.3f",m);
	return 0;
}




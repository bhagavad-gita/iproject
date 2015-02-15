/* Chapter 3.1 Find Square Root of a Number
	Sekar Che, Feb 2015 */
	
#include<stdio.h>

int main()
{
	float m;
	float n;
	float num[100];
	n = 0.001;  
	int a; 
	int i;
	float num1;

	printf ("Enter Conuts of number:\n");
	scanf("%d",&a);
	
	printf ("Enter a Numbers : \n");
	
	for ( i = 0; i < a; i++) {
		scanf ("%f",&num[i]);
		num1 *= num[i];
	}
	
	printf ("%f", num1);
	
	for (m = 0; m < num1; m = m + n) {
		
		if((m * m) > num1) {
			m = m - n;          
			break;      
		}
	}	
	
	printf("%.3f",m);
	return 0;
}




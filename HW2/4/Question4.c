
#include <stdio.h>

int main()
{
	printf("Please enter an integer value of cents: ");

	int m;
	
	scanf("%d", &m);

	int q, d, n, p;

	q = m/25;
	
	m = m - (25*q);

	d = m/10;

	m = m - (10*d);

	n = m/5;

	m = m - (5*n);

	p = m;

	printf("You have: %d quarters %d dimes %d nickels %d pennies \n", q, d, n, p);

	return 0;

}



	


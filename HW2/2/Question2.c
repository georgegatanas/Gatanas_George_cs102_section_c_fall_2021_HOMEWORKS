
#include <stdio.h>


int main()
{
	printf("Please enter a number of minutes: ");
	int n;

	scanf("%d", &n);

	int h, m;

	h = n/60;
	m = n - (h*60);

	printf("The total number of hours and minutes is: %d hours and %d minutes. \n", h, m);

	return 0;

}



#include <stdio.h>


int main()
{
	printf("Please enter a decimal value: ");

	float a;

	scanf("%f", &a);

	printf("Your value is: %d\n", a);

	printf("Please enter an integer value: ");

	int b;

	scanf("%d", &b);

	printf("Your value is: %f\n", b);

	printf("Please enter a character: ");
	
	char c;

	scanf(" %c", &c);

	printf("Your character is: %d\n", c);

	return 0;
}	

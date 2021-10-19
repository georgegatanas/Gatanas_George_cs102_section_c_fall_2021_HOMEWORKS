
#include <stdio.h>


int main() 
{
	printf("Please enter the desired height of the rectangle: ");
	int h;

	scanf("%d", &h);

	printf("Please enter the desired width of the rectangle: ");
	int w;

	scanf("%d", &w);

	printf("The perimeter of the rectangle is: %d \n", (w+w+h+h));

	return 0;
}
	

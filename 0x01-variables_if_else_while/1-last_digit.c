#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * @void: Empty parameter list for main.
 *
 * Description: this code Prints last digit of random number and tells
 * if it is greater than 5, 0, or less than 6 and not 0.
 *
 * Return 0 if cool
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	 int h;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there*/
       /*the last digit is h*/
	h = n % 10;
	if (h > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, h);
	}
	else if (h == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, h);
	}
	else 
	{
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, h);
	}
	return (0);
}

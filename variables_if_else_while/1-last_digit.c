#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main - Yes
*
*
* Return: yes
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d  is greater than 5 and not 0"\n)
	if (n  == 0)
		printf("Last digit of %d is 0 and is 0"\n)
	if (n < 5)
		printf("Last digit of %d is 2 less than 5 and in not 0"\n)
	return (0);
}

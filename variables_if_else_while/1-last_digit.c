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
	int n, a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (n > 5)
		printf("Last digit of %d  is %d is  greater than 5\n", n, a);
	if (n == 0)
		printf("Last digit of %d is %d is  and is 0\n", n, a);
	else
	if (n < 5)
		printf("Last digit of %d is %d less than 5 and in not 0\n", n, a);
	return (0);
}

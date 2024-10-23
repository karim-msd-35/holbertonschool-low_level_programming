#include <stdio.h>
/**
* main -yess
* Return: no
*/

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}

	putchar('\n');
	return (0);
}

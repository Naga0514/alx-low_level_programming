#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * @void: no argument
**/
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');
	return (0);
}

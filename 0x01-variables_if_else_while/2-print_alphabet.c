#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		while (c <= 'z')
		c++;
	}
	putchar('\n');
	return (0);
}

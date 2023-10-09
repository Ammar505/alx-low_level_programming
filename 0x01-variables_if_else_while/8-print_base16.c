#include <stdio.h>
/**
 * main - entry point
 * Description:  print 16 base
 * Return: retuen 0
 */
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
		putchar('\n');
		return (0);
}

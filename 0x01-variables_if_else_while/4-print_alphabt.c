#include <stdio.h>
/**
 * main - Entry point
 * Description: print all letters except q and e
 * Return: return 0
 */
int main(void)
{
	char alphabit = 'a';

	while (alphabit <= 'z')
	{
	putchar(alphabit);
	alphabit++;
	if (alphabit == 'q' || alphabit == 'e')
	alphabit++;
	}
	putchar('\n');
	return (0);
}

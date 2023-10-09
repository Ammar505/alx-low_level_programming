#include <stdio.h>
/**
 * main - entry point
 * Description: print alphabit usin putchar
 * Return: return 0
 */
int main(void)
{
	char alphabit = 'a';
	while ( alphabit <= 'z')
	{
	putchar(alphabit);
	alphabit ++;
	if (alphabit == 'e' || alphabit == 'q')
	alphabit++;
	}
	putchar('\n');
	return (0);
}

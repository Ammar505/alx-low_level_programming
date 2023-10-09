#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers using putchar
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10 ; num++)
	{
		putchar(num + '0');
	}
		putchar('\n');
		return (0);
}

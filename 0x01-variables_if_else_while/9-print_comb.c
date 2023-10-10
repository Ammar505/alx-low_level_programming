#include <stdio.h>
/**
 * main - entry point 
 * Description: print comb
 * Return: return 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9 ; num++)
	{
		putchar(num + '0');
		putchar(',');	
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

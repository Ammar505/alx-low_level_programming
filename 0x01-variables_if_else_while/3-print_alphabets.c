#include <stdio.h>
/**
 * main - Entry point
 * Description: print capital and small letters
 * Return: return 0
 */
int main(void)
{
char alphabit = 'a';
while (alphabit <= 'z')
{
putchar(alphabit);
alphabit++;
}
alphabit = 'A';
while (alphabit <= 'Z')
{
putchar(alphabit);
alphabit++;
}
putchar('\n');
return (0);
}

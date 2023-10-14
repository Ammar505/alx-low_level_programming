/**
 * main - entry point
 * Description: print 100 digits with putchar
 * Return: return 0
 */
#include <stdio.h>

int main()
{
  int i, j;
  
  for (i = 0; i < 9; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      putchar(i + '0');
      putchar(j + '0');
      if (i != 8 || j != 9) {
        putchar(',');
        putchar(' ');
      }
    }
  }
  
  putchar('\n');
  
  return 0;
}

